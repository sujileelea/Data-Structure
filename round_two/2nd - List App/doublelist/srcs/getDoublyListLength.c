/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getDoublyListLength.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 20:19:22 by sujilee           #+#    #+#             */
/*   Updated: 2022/01/31 20:19:51 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doublylist.h"

int getDoublyListLength(DoublyList* pList)
{
	if(!pList)
		return FALSE;
	return (pList->currentElementCount);
}