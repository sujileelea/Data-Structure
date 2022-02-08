/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deleteLinkedStack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:28:54 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/03 16:46:27 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedstack.h"

void deleteLinkedStack(LinkedStack* pStack)
{
	StackNode *free_p = NULL;
	if (!pStack || !pStack->pTopElement)
		return ;
	while (pStack->currentElementCount)
	{
		printf("d:%p\n",pStack);
		free_p = popLS(pStack);
		free(free_p);
	}
}