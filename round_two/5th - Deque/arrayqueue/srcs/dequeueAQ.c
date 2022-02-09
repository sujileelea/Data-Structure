/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dequeueAQ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:06:49 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/09 13:18:26 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arrayqueue.h"

ArrayQueueNode *dequeueAQ(ArrayQueue* pQueue)
{
	 ArrayQueueNode	*frontNode;
	
	if (!pQueue)
		return FALSE;
	if (isArrayQueueEmpty(pQueue))
		return FALSE;
	frontNode = (ArrayQueueNode *)malloc(sizeof(ArrayQueueNode));
	if (!frontNode)
		return FALSE;
	*frontNode = pQueue->pElement[pQueue->front];
	pQueue->front = (pQueue->front + 1) % pQueue->maxElementCount;	
	pQueue->currentElementCount--;
	return (frontNode);
}