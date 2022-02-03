/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addLLElement.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:25:29 by sujilee           #+#    #+#             */
/*   Updated: 2022/01/31 12:32:02 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

int addLLElement(LinkedList* pList, int position, ListNode element)
{
	ListNode *newNode;
	ListNode *prevNode;


	if (!pList)
		return FALSE;
	if (position > pList->currentElementCount || position 
	< 0)
		return FALSE;

	newNode = (ListNode *)calloc(1, sizeof(ListNode));
	if (!newNode)
		return FALSE;
	newNode->data = element.data;
	prevNode = getLLElement(pList, position - 1);

	if (position == 0)
	{
		newNode->pLink = pList->headerNode.pLink;
		pList->headerNode.pLink = newNode;
	}
	else
	{
		newNode->pLink = prevNode->pLink;
		prevNode->pLink = newNode;
	}
	pList->currentElementCount++;

	return TRUE;
}