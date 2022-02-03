/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   popLS.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:28:54 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/02 21:01:54 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedstack.h"

StackNode* popLS(LinkedStack* pStack)
{
	StackNode *retNode;
	
	retNode = (StackNode *)malloc(sizeof(StackNode));
	if (!retNode || !pStack->pTopElement || isLinkedStackEmpty(pStack))
		return (NULL);
	*(retNode) = *(pStack->pTopElement);
	
	free(pStack->pTopElement);
	pStack->pTopElement = retNode->pLink;//ÂòÂò

	pStack->currentElementCount--;
	return (retNode);
}
