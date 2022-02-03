/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   peekAS.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:07:17 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/02 21:01:54 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

ArrayStackNode* peekAS(ArrayStack* pStack)
{
	ArrayStackNode *peekNode;
	int top = 0;

	if (!pStack || pStack->currentElementCount == 0)
		return FALSE;
	peekNode = (ArrayStackNode *)malloc(sizeof(ArrayStackNode));
	if (!peekNode)
		return FALSE;
		
	top = pStack->currentElementCount - 1;
	peekNode = &pStack->pElement[top];
	return (peekNode);
}