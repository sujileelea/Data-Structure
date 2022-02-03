/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   removeALElement.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 14:38:27 by sujilee           #+#    #+#             */
/*   Updated: 2022/01/31 10:56:14 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"

int removeALElement(ArrayList* pList, int position)
{
	int idx = position;

	//예외처리
	if (!pList)
		return  FALSE;
	if (position < 0 || position >= pList->maxElementCount || position >= pList->currentElementCount)
		return FALSE;

	if (position != pList->currentElementCount -1)
	{
		while (idx < pList->currentElementCount)
		{
			pList->pElement[idx].data = pList->pElement[idx + 1].data;
			idx++;
		}
	}	
	pList->pElement[pList->currentElementCount - 1].data = 0;

	pList->currentElementCount--;
	
	return TRUE;
}