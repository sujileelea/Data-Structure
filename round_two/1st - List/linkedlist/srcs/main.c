/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:52:25 by sujilee           #+#    #+#             */
/*   Updated: 2022/01/31 12:49:22 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int len = 0;
	int position = 0;
	int number = 0;
	LinkedList *temp;
	ListNode *curr;
	ListNode node0 = {0, 0};

	temp = createLinkedList();
	
	while(1)
	{
		printf("1 : Add Linkednode\n2 : Remove Linkednode\n3 : Get Linkednode\n4 : Display Linkedlist\n5 : Get Linkedlist length\n6 : Clear Linkedlist\n7: Delete Linkedlist\n");
		printf(">> ");
		scanf(" %d", &number);
		switch (number)
		{
		case 1:
			printf("index, data : ");
			scanf("%d %d", &position, &(node0.data));
			addLLElement(temp, position, node0);
			break;
		case 2:
			printf("position: ");
			scanf("%d", &position);
			removeLLElement(temp, position);
			break;
		case 3:
			printf("position: ");
			scanf("%d", &position);
			curr = getLLElement(temp, position);
			printf("%d\n", curr->data);
			break;
		case 4:
			printLinkedList(temp);
			break;
		case 5:
			len = getLinkedListLength(temp);
			printf("%d\n", len);
		case 6:
			clearLinkedList(temp);
			break;
		case 7:
			deleteLinkedList(temp);
			break;
		default:
			break;
		}
	}
	if(temp)
		deleteLinkedList(temp);
	system("leaks arraylist");
}