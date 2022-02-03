/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isArrayStackFull.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:05:34 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/02 20:27:54 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

int isArrayStackFull(ArrayStack* pStack)
{
	if (!pStack)
		return FALSE;
	if (pStack->currentElementCount == pStack->maxElementCount)
		return TRUE;
	else
		return FALSE;
}

