/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createArrayQueue.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:25:13 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/09 12:36:44 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arrayqueue.h"

ArrayQueue* createArrayQueue(int maxElementCount)
{
	ArrayQueue *myQueue;

	myQueue = (ArrayQueue *)calloc(1, sizeof(ArrayQueue));
	if (!myQueue)
		return FALSE;
	myQueue->maxElementCount = maxElementCount;
	myQueue->pElement = (ArrayQueueNode *)calloc(maxElementCount, sizeof(ArrayQueueNode));
	if (!myQueue->pElement)
		return FALSE;
		
	return (myQueue);
	
}