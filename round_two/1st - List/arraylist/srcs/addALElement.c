/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addALElement.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 14:38:27 by sujilee           #+#    #+#             */
/*   Updated: 2022/01/30 15:17:05 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"

int addALElement(ArrayList* pList, int position, ArrayListNode element)
{
	ArrayListNode *newNode = &element;
	int idx = position;

	if (!pList)
		return FALSE;
	if (position < 0 || position >= pList->maxElementCount || isArrayListFull(pList))
		return FALSE;
	while (idx < pList->currentElementCount)
	{
		pList->pElement[idx + 1] = pList->pElement[idx];
		idx++;
	}
	pList->pElement[position] = *newNode;
	pList->currentElementCount++;
	return TRUE;
}