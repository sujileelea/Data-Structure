/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createLinkedList.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 14:38:27 by sujilee           #+#    #+#             */
/*   Updated: 2022/01/30 14:51:59 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"

ArrayList* createArrayList(int maxElementCount)
{
	ArrayList *myList;

	myList = (ArrayList *)calloc(1, sizeof(ArrayList));
	if (!myList)
		return FALSE;
	myList->maxElementCount = maxElementCount;

	myList->pElement = (ArrayListNode *)calloc(maxElementCount, sizeof(ArrayListNode));
	if (!myList->pElement)
		return FALSE;
	return (myList);
}