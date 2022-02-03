/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   displayArrayStack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:32:25 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/02 20:27:38 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

void displayArrayStack(ArrayStack* pStack)
{
	ArrayStackNode *curr;
	int idx = 0;
	
	if (!pStack)
		return ;
	if (isArrayStackEmpty(pStack))
		printf("Array Stack is empty!\n");
	if (isArrayStackFull(pStack))
		printf("Array Stack is full!\n");
	while (idx < pStack->currentElementCount)
	{
		curr = &pStack->pElement[idx];
		printf("index : %d, data : %d\n", idx, curr->data);
		idx++;
	}
	printf("currcnt : %d\n", pStack->currentElementCount);
	
	printf("maxcnt : %d\n", pStack->maxElementCount);
	
	return ;
}