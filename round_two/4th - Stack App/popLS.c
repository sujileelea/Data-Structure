/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   popLS.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:28:54 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/07 14:48:25 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedstack.h"

StackNode* popLS(LinkedStack* pStack)
{
	StackNode *retNode;
	
	if (!pStack || isLinkedStackEmpty(pStack))
		return (NULL);

	retNode = (StackNode *)malloc(sizeof(StackNode));
	if (!retNode)
		return (NULL);
	*(retNode) = *(pStack->pTopElement);
	
	// printf("pop free call\n");
	// printf("p:%p\n", pStack);
	free(pStack->pTopElement);
	pStack->pTopElement = retNode->pLink;

	pStack->currentElementCount--;
	return (retNode);
}
