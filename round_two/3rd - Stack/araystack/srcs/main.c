/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:32:02 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/02 20:27:52 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"
#include <stdio.h>

int main()
{
	ArrayStack *myArray;
	ArrayStackNode *curr;
	ArrayStackNode node0 = {0};
	int max;
	int number = 0;
	int pushNum = 0;
	printf("input maxsize: ");
	scanf("%d", &max);
	myArray = createArrayStack(max);
	while(1)
	{
		printf("1 : Push Arraynode\n2 : Pop Arraynode\n3 : Peek Arraynode\n4 : Display ArrayStack\n5 : Delete ArrayStack\n6 : is ArrayStack Empty?\n7 : is ArrayStack FUll?\n");
		printf(">> ");
		scanf(" %d", &number);
		switch (number)
		{
		case 1:
			printf("data: ");
			scanf("%d", &(node0.data));
			pushNum = pushAS(myArray, node0);
			printf("pushed data : %d\n", pushNum);
			break;
		case 2:
			curr = popAS(myArray);
			if (!isArrayStackEmpty(myArray))
				printf("2's data : %d\n", curr->data);
			break;
		case 3:
			curr = peekAS(myArray);
			if(curr)
				printf("'s data : %d\n", curr->data);
			break;
		case 4:
			displayArrayStack(myArray);
			break;
		case 5:
			deleteArrayStack(myArray);
			break;
		case 6:
			if (isArrayStackEmpty(myArray))
				printf("arraystack is empty\n");
			break;
		case 7:
			if (isArrayStackFull(myArray))
				printf("arraystack is full");
			break;
		default:
			break;
		}
	}
	if(myArray)
		deleteArrayStack(myArray);
	return (0);
}