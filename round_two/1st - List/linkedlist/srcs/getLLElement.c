/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getLLElement.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:15:54 by sujilee           #+#    #+#             */
/*   Updated: 2022/01/31 12:20:33 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

ListNode* getLLElement(LinkedList* pList, int position)
{
	ListNode *curr;
	ListNode *retNode;
	int idx = 0;

	if (!pList || position < 0 || position >= pList->currentElementCount)
		return FALSE;
	curr = pList->headerNode.pLink;

	while (idx < position)
	{
		idx++;
		curr = curr->pLink;
	}
	retNode = curr;

	return (retNode);
}