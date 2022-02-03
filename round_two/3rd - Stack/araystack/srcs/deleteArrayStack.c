/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deleteArrayStack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:12:12 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/02 20:27:54 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

void deleteArrayStack(ArrayStack* pStack)
{
	if (!pStack || !pStack->pElement)
		return ;
	while (pStack->currentElementCount)
	{
		popAS(pStack);
	}

	pStack->maxElementCount = 0;
	pStack->pElement = 0;
	
	free(pStack->pElement);
	free(pStack);
	return ;
}