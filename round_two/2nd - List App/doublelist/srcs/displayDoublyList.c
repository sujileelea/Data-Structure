/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   displayDoublyList.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 20:27:11 by sujilee           #+#    #+#             */
/*   Updated: 2022/01/31 20:30:48 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doublylist.h"

void displayDoublyList(DoublyList* pList)
{
	DoublyListNode *curr;
	int idx = 0;

	if(!pList)
		return ;
	curr = pList->headerNode.pRLink;
	while (idx < pList->currentElementCount)
	{
		printf("position : %d, data : %d\n", idx, curr->data);
		curr = curr->pRLink;
		idx++;
	}
	return ;
}