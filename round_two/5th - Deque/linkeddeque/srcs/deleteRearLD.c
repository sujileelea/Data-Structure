/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deleteRearLD.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:49:01 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/09 15:23:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkeddeque.h"

DequeNode* deleteRearLD(LinkedDeque* pDeque)
{
	DequeNode *delNode;
	
	if (!pDeque)
		return NULL;
	if (isLinkedDequeEmpty(pDeque))
		return NULL;

	delNode = pDeque->pRearNode;

	if (pDeque->currentElementCount == 1)
	{
		pDeque->pFrontNode = NULL;
		pDeque->pRearNode = NULL;
	}
	else
	{
		pDeque->pRearNode = delNode->pLLink;
		pDeque->pRearNode->pRLink = NULL;
	}
	pDeque->currentElementCount--;
	return (delNode);
}