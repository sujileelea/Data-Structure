/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arraylist.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:23:32 by sujilee           #+#    #+#             */
/*   Updated: 2022/01/25 11:56:50 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"

ArrayList* createArrayList(int maxElementCount)
{
	ArrayList *myList;
	
	myList = (ArrayList *)calloc(1, sizeof(ArrayList));
	if (!myList)
		return FALSE;
	myList->pElement = (ArrayListNode *)calloc(1, sizeof(ArrayListNode));
	if (!myList->pElement)
		return FALSE;
	
	return (myList);
}

int isArrayListFull(ArrayList* pList)
{
	if (pList->maxElementCount == pList->currentElementCount)
		return TRUE;
	return FALSE;
}

ArrayListNode* getALElement(ArrayList* pList, int position)
{
	ArrayListNode *ret_node;

	if (!pList)
		return FALSE;
	if (position >= pList->currentElementCount)
		return FALSE;
	ret_node = &pList->pElement[position];
	return (ret_node);
}

int addALElement(ArrayList* pList, int position, ArrayListNode element)
{
	int idx = pList->currentElementCount - 1;

	if (!pList || position > pList->currentElementCount ||
			isArrayListFull(pList))
		return FALSE;
	//그 외의 경우 : 시간복잡도 O(n)
	while (position < idx)
	{
		pList->pElement[idx + 1] = pList->pElement[idx];
		idx--;
	}
	pList->pElement[position] = element;
	return TRUE;
	//맨 뒤의 경우 : 시간복잡도 O(1)
}

int removeALElement(ArrayList* pList, int position)
{
	if (!pList || position >= pList->currentElementCount)
		return FALSE;
	while (position)


}


void deleteArrayList(ArrayList* pList)
{
	if (!pList)
		return FALSE;
	
}