/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   popAS.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:12:04 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/02 20:36:36 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

ArrayStackNode* popAS(ArrayStack* pStack)
{
	ArrayStackNode *popNode;
	int top = 0;
	
	if (!pStack)
		return FALSE;
	if (isArrayStackEmpty(pStack))
	{	printf("beware of underflow!\n");
		return FALSE;
	}
	top = pStack->currentElementCount - 1;
	popNode = (ArrayStackNode *)malloc(sizeof(ArrayStackNode));
	if (!popNode)
		return FALSE;
	popNode = &pStack->pElement[top];

	pStack->currentElementCount--;

	return (popNode) ;
}