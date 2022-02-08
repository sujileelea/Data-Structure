/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maze.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:22:45 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/08 11:28:28 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedstack.h"
#

int		validation_check(LinkedStack *history, MapPosition curr)
{

	int x = curr.x;
	int y = curr.y;
	
	if (x < 0 || x >= history->max_width)
	{
		return FALSE;
	}
	if (y < 0 || y >= history->max_height)
	{
		return FALSE;
	}
	
	if (history->maze[y][x] > 0)
		return FALSE;

	return TRUE;
}


MapPosition move_hyopark(MapPosition currPosition , int direction)
{
	MapPosition retPos;
	retPos.x = currPosition.x + DIRECTION_OFFSETS[direction][0];
	retPos.y = currPosition.y + DIRECTION_OFFSETS[direction][1];
	retPos.direction = NODIRECTION;
	return (retPos);
}

void printMaze(LinkedStack *history)
{
	for (int i = 0 ; i < WIDTH ; i ++)
	{
		for (int j = 0 ; j < HEIGHT ; j++)
		{
			printf("%d ",history->maze[i][j]);
		}
		printf("\n ");
	}
	printf("\n ");
}

int maze(LinkedStack *history, MapPosition prevPos, int direction)
{
	//이전 효팍의 위치 -> 효팍이 서있는 곳
	StackNode prev;
	//현재 효팍의 위치 -> 효팍이 향할 곳
	StackNode curr;

	printMaze(history);

	//prev에 정보 전달
	prev.data = prevPos;
	prev.data.direction = direction;
	//curr에 이동한 효팍의 정보 전달
	curr.data = move_hyopark(prevPos ,direction);
	
	//재귀 시작!!
	//현 위치에 대한 유효성 검사 : 갈 수 없는 곳이면 fail!
	if (!validation_check(history,curr.data))
		return (FALSE);
	//현 위치가 골 포인트면 탈출!
	else if (curr.data.x == WIDTH - 1 &&curr.data.y == HEIGHT - 1)
	{
		history->maze[curr.data.y][curr.data.x] = 2;
		pushLS(history, prev);
		pushLS(history,curr);
		//여기서 TURE가 반환되면 사방탐색의 조건 중 하나가 TRUE를 반환하고 모든 재귀가 순차적으로 자자자작 닫힌다.
		return (TRUE);
	}
	//아직 미로의 안일 경우
	else
	{
		//현 위치를 스택에 푸쉬
		pushLS(history, prev);
		//발자국 찍기
		history->maze[curr.data.y][curr.data.x] = 2;

		//동, 남, 서, 북의 순서에 따라 미로를 탐색한다.
		// || 연산자로 묶었기에 앞에서부터 하나라도 만족한다면 TRUE 반환(최종적으로 재귀를 돌다 골포인트에 진입하면 최종 TRUE 반환)
		if (maze(history,curr.data,EAST) || maze(history, curr.data, SOUTH)||maze(history, curr.data, WEST)||maze(history, curr.data, NORTH))
			return (TRUE);
		//사방이 막혀있을 경우
		else
		{
			//스택 팝
			popLS(history);
			return (FALSE);
		}
	}

}

int main(int ac, char **av)
{
	LinkedStack *history = NULL;

	history = createLinkedStack();
	history->max_height = WIDTH;
	history->max_width = HEIGHT;

	//스폰 위치 좌표
	MapPosition startPosition;
	startPosition.x = 0;
	startPosition.y = 0;
	//첫 스폰 시 방향은 노디렉션
	startPosition.direction = NODIRECTION;

	int mazeArr[WIDTH][HEIGHT] = {
		{0, 0, 1, 1, 1, 1, 1, 1},
		{1, 0, 0, 0, 0, 0, 0, 1},
		{1, 1, 1, 0, 1, 1, 1, 1},
		{1, 1, 1, 0, 1, 1, 1, 1},
		{1, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 1, 1, 1, 1, 1, 1},
		{1, 0, 0, 0, 0, 0, 0, 0},
		{1, 1, 1, 1, 1, 1, 1, 0},
	};

	history->maze = mazeArr;

	//maze 호출!!
	//첫 maze 호출 시에는 스폰 후 발동이기때문에 노디렉션을 전달
	if (maze(history, startPosition, NODIRECTION))
	{
		printMaze(history);
		printf("GOAL!!!\n");
		displayLinkedStack(history);
	}
	else
	{
		printf("not vailed map!!!\n");
	}
	return 0;

}
