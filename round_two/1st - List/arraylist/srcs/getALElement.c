/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getALElement.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 14:38:27 by sujilee           #+#    #+#             */
/*   Updated: 2022/01/30 14:57:04 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"

ArrayListNode* getALElement(ArrayList* pList, int position)
{
	if (!pList)
		return FALSE;
	if (position >= pList->maxElementCount || position < 0)
		return FALSE;
	return (&(pList->pElement[position]));
}