/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deleteDoublyList.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 20:34:29 by sujilee           #+#    #+#             */
/*   Updated: 2022/01/31 20:39:32 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doublylist.h"

void deleteDoublyList(DoublyList* pList)
{
	DoublyListNode *curr;
	DoublyListNode *temp;
	int idx = 0;
	
	if (!pList)
		return ;
	while (idx < pList->currentElementCount)
	{
		temp = curr;
		free(temp);
		curr = curr->pRLink;
		idx++;
	}
	free(curr);
	pList->currentElementCount = 0;
	free(pList);
	
	return ;
}