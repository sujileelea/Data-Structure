/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createDoublyList.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 20:16:48 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/01 09:40:39 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doublylist.h"

DoublyList* createDoublyList()
{
	DoublyList *myList;

	myList = (DoublyList *)calloc(1, sizeof(DoublyList));
	if (!myList)
		return FALSE;
		
	myList->headerNode.pRLink = &myList->headerNode;
	myList->headerNode.pLLink = &myList->headerNode;
	
	return (myList);
}