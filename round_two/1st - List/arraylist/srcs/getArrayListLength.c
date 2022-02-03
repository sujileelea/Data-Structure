/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getArrayListLength.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 14:38:27 by sujilee           #+#    #+#             */
/*   Updated: 2022/01/30 14:53:33 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"

int getArrayListLength(ArrayList* pList)
{
	if (!pList)
		return FALSE;
	return (pList->currentElementCount);
}