/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createLinkedStack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:28:54 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/02 20:31:47 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedstack.h"

LinkedStack* createLinkedStack()
{
	LinkedStack * myStack;
	
	myStack = (LinkedStack *)malloc(sizeof(LinkedStack));
	if (!myStack)
		return (NULL);
	myStack->pTopElement = NULL;
	myStack->currentElementCount = 0;

	return myStack;
}