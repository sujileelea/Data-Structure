/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printLinkedList.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:38:15 by sujilee           #+#    #+#             */
/*   Updated: 2022/01/31 12:39:40 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

void printLinkedList(LinkedList* pList)
{
	ListNode *curr = pList->headerNode.pLink;
	int idx = 0;

	if (!pList)
		return ;
	
	while(curr)
	{
		printf("index : %d, data : %d\n", idx, curr->data);
		curr = curr->pLink;
		idx++;
	}
	
	return ;
}