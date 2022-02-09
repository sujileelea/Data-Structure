/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertRearLD.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:49:01 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/09 15:08:42 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkeddeque.h"

int insertRearLD(LinkedDeque* pDeque, DequeNode element)
{
	DequeNode *rearNode;
	
	if (!pDeque)
		return FALSE;
	rearNode = (DequeNode *)malloc(sizeof(DequeNode));
	if (!rearNode)
		return FALSE;
	*rearNode = element;
	
	if (isLinkedDequeEmpty(pDeque))
	{
		pDeque->pFrontNode = rearNode;
		rearNode->pLLink = NULL;
	}
	else
	{
		pDeque->pRearNode->pRLink = rearNode;
		rearNode->pLLink = pDeque->pRearNode;
	}

	pDeque->pRearNode = rearNode;
	rearNode->pRLink = NULL;
	
	pDeque->currentElementCount++;
	return (TRUE);
}