/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isArrayStackEmpty.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:06:38 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/02 20:27:53 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

int isArrayStackEmpty(ArrayStack* pStack)
{
	// if (!pStack)
	// 	return FALSE;
	if (pStack->currentElementCount == 0)
		return TRUE;
	else
		return FALSE;
}