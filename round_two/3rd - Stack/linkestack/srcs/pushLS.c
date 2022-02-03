/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushLS.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:28:54 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/02 21:01:54 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedstack.h"

int pushLS(LinkedStack* pStack, StackNode element)
{
	StackNode *pushNode;
	
	if (!pStack)
		return FALSE;
	pushNode = (StackNode *)malloc(sizeof(StackNode));
	if (!pushNode)
		return FALSE;
	pushNode->data = element.data;
	pushNode->pLink = pStack->pTopElement;
	pStack->pTopElement = pushNode;
	pStack->currentElementCount++;

	return TRUE;
}