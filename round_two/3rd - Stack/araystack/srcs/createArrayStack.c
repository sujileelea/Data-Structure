/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createArrayStack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:59:17 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/02 20:27:55 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

ArrayStack* createArrayStack(int maxElementCount)
{
	ArrayStack *myList;

	myList = (ArrayStack *)calloc(1, sizeof(ArrayStack));
	if (!myList)
		return FALSE;
	
	myList->maxElementCount = maxElementCount;

	myList->pElement = (ArrayStackNode *)calloc(maxElementCount, sizeof(ArrayStackNode));
	if (!myList->pElement)
		return FALSE;
	
	return (myList);
}

