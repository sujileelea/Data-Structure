/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createLinkedList.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:13:55 by sujilee           #+#    #+#             */
/*   Updated: 2022/01/31 12:15:15 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

LinkedList* createLinkedList()
{
	LinkedList *myList;

	myList = (LinkedList *)calloc(1, sizeof(LinkedList));
	if (!myList)
		return FALSE;
		
	return (myList);
}