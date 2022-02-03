/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clearDoublyList.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 20:30:54 by sujilee           #+#    #+#             */
/*   Updated: 2022/01/31 20:34:28 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doublylist.h"

void clearDoublyList(DoublyList* pList)
{
	DoublyListNode *curr;
	int idx = 0;
	
	if (!pList)
		return ;
	curr = pList->headerNode.pRLink;
	while (idx < pList->currentElementCount)
	{
		curr->data = 0;
		curr = curr->pRLink;
	}
	pList->currentElementCount = 0;
	
	return ;
}