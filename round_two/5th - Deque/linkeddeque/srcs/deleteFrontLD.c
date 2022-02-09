/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deleteFrontLD.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:49:01 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/09 15:27:01 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkeddeque.h"

DequeNode*		deleteFrontLD(LinkedDeque* pDeque)
{
	
	DequeNode *delNode;
	
	if (!pDeque)
		return NULL;
	if (isLinkedDequeEmpty(pDeque))
		return NULL;

	delNode = pDeque->pFrontNode;

	if (pDeque->currentElementCount == 1)
	{
		pDeque->pFrontNode = NULL;
		pDeque->pRearNode = NULL;
	}
	else
	{
		pDeque->pFrontNode = delNode->pRLink;
		pDeque->pFrontNode->pLLink = NULL;
	}
	pDeque->currentElementCount--;
	return (delNode);
}