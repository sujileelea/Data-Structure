/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isArrayListFull.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 14:38:27 by sujilee           #+#    #+#             */
/*   Updated: 2022/01/30 14:52:49 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"

int isArrayListFull(ArrayList* pList)
{
	if (!pList)
		return FALSE;
	if (pList->currentElementCount == pList->maxElementCount)
		return TRUE;
	return FALSE;
}