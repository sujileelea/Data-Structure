/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getDLElement.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 20:19:55 by sujilee           #+#    #+#             */
/*   Updated: 2022/01/31 20:27:09 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doublylist.h"

DoublyListNode* getDLElement(DoublyList* pList, int position)
{
	DoublyListNode *curr;
	int idx = 0;
	
	if (!pList || position < 0 || position > pList->currentElementCount)
		return FALSE;
	
	curr = pList->headerNode.pRLink;
	while (idx < position)
	{
		idx++;
		curr = curr->pRLink;
	}
	return (curr);
}