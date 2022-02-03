/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getLinkedListLength.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:15:16 by sujilee           #+#    #+#             */
/*   Updated: 2022/01/31 12:15:53 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

int getLinkedListLength(LinkedList* pList)
{
	if (!pList)
		return FALSE;
	return (pList->currentElementCount);
}