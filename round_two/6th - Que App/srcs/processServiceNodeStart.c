/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processServiceNodeStart.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:00:22 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/11 17:23:40 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "simutil.h"

QueueNode* processServiceNodeStart(int currentTime, LinkedQueue *pWaitQueue)
{
	QueueNode	*serviceNode;

	if (!pWaitQueue)
		return NULL;
	serviceNode = deleteFrontLD(pWaitQueue);
	if (!serviceNode)
		return NULL;
	serviceNode->data.startTime = currentTime;
	serviceNode->data.status = start;
	return (serviceNode);
}