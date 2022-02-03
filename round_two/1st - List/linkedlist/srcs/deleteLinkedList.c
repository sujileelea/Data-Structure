/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deleteLinkedList.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:23:31 by sujilee           #+#    #+#             */
/*   Updated: 2022/01/31 12:25:23 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

void deleteLinkedList(LinkedList* pList)
{
	ListNode *curr;
	ListNode *temp;
	
	if (!pList)
		return ;
	curr = pList->headerNode.pLink;
	while (curr)
	{
		temp = curr;
		free(temp);
		curr = curr->pLink;
	}
	free(curr);
	pList->currentElementCount = 0;
	free(pList);

	return ;
}

