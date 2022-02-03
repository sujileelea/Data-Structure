/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clearLinkedList.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:20:34 by sujilee           #+#    #+#             */
/*   Updated: 2022/01/31 12:23:55 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

void clearLinkedList(LinkedList* pList)
{
	ListNode *curr;

	if (!pList)
		return ;
	curr = pList->headerNode.pLink;
	while (curr)
	{
		curr->data = 0;
		curr = curr->pLink;
	}
	pList->currentElementCount = 0;
	
	return ;
}