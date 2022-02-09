/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enqueueAQ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:00:03 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/09 13:18:19 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arrayqueue.h"

int enqueueAQ(ArrayQueue* pQueue, ArrayQueueNode element)
{
	if (!pQueue)
		return FALSE;
	if (isArrayQueueFull(pQueue))
		return FALSE;
	//큐가 비어있을 경우
	if (pQueue->currentElementCount == 0)
		pQueue->pElement[pQueue->front] = element;
	else
	{
		pQueue->rear = (pQueue->rear + 1) % pQueue->maxElementCount;
		pQueue->pElement[pQueue->rear] = element;
	}
	pQueue->currentElementCount++;
	
	return TRUE;
}