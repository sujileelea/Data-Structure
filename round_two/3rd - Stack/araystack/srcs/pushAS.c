/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushAS.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:24:24 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/02 19:51:28 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

int pushAS(ArrayStack* pStack, ArrayStackNode element)
{
	ArrayStackNode pushNode;
	
	if (!pStack || isArrayStackFull(pStack))
		return FALSE;
	
	pushNode.data = element.data;
	pStack->pElement[pStack->currentElementCount].data = pushNode.data;
	pStack->currentElementCount++;
	return (pushNode.data);
}