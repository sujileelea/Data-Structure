/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   removeLLElement.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:32:05 by sujilee           #+#    #+#             */
/*   Updated: 2022/01/31 12:52:56 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

int removeLLElement(LinkedList* pList, int position)
{
	ListNode *prevNode;
	ListNode *delNode;
	
	if (!pList)
		return FALSE;
	if (position < 0 || position >= pList->currentElementCount)
		return FALSE;
	
	if (position == 0)
		prevNode = &pList->headerNode;
	else
		prevNode = getLLElement(pList, position - 1);
	delNode = getLLElement(pList, position);
	
	prevNode->pLink = delNode->pLink;
	delNode->pLink = 0;
	delNode->data = 0;
	free(delNode);

	pList->currentElementCount--;

	return TRUE;
	
}