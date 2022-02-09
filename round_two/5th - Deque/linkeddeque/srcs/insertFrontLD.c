/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertFrontLD.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:49:01 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/09 15:06:209 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkeddeque.h"

int insertFrontLD(LinkedDeque* pDeque, DequeNode element)
{
	DequeNode *frontNode;
	
	if (!pDeque)
		return FALSE;
	frontNode = (DequeNode *)calloc(1, sizeof(DequeNode));
	if (!frontNode)
		return FALSE;
	*frontNode = element;

    if (isLinkedDequeEmpty(pDeque))
	{
		pDeque->pRearNode = frontNode;
		frontNode->pRLink = NULL;
	}
	else
	{
		pDeque->pFrontNode->pLLink = frontNode;
		frontNode->pRLink = pDeque->pFrontNode;
	}

	pDeque->pFrontNode = frontNode;
	frontNode->pLLink = NULL;
	
	pDeque->currentElementCount++;
	return (TRUE);
}