/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:32:02 by sujilee           #+#    #+#             */
/*   Updated: 2022/01/31 12:41:12 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"
#include <stdio.h>

int main()
{
	ArrayList *myArray;
	ArrayListNode *curr;
	ArrayListNode node0 = {0};
	int len = 0;
	int position = 0;
	int max;
	int number = 0;
	printf("input maxsize: ");
	scanf("%d", &max);
	myArray = createArrayList(max);
	while(1)
	{
		printf("1 : Add Arraynode\n2 : Remove Arraynode\n3 : Get Arraynode\n4 : Display Arraylist\n5 : Get Arraylist length\n6 : Clear Arraylist\n7: Delete Arraylist\n");
		printf(">> ");
		scanf(" %d", &number);
		switch (number)
		{
		case 1:
			printf("position, data: ");
			scanf("%d %d", &position, &(node0.data));
			addALElement(myArray, position, node0);
			break;
		case 2:
			printf("position: ");
			scanf("%d", &position);
			removeALElement(myArray, position);
			break;
		case 3:
			printf("position: ");
			scanf("%d", &position);
			curr = getALElement(myArray, position);
			if(curr)
				printf("'s data : %d\n", curr->data);
			break;
		case 4:
			displayArrayList(myArray);
			break;
		case 5:
			len = getArrayListLength(myArray);
			printf("%d\n", len);
		case 6:
			clearArrayList(myArray);
			break;
		case 7:
			deleteArrayList(myArray);
			break;
		default:
			break;
		}
	}
	if(myArray)
		deleteArrayList(myArray);
	return (0);
}