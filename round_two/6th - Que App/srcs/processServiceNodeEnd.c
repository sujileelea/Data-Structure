/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processServiceNodeEnd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:00:22 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/11 17:19:109 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "simutil.h"

QueueNode* processServiceNodeEnd(int currentTime, QueueNode *pServiceNode, int *pServiceUserCount, int *pTotalWaitTime)
{
	QueueNode	*node;
    
	if (!pServiceUserCount || !pServiceUserCount || !pTotalWaitTime)
        return NULL;
	pServiceNode->data.endTime = currentTime;
	*pTotalWaitTime += pServiceNode->data.startTime - pServiceNode->data.arrivalTime;
	node = deleteFront(pServiceNode);
	if (!node)
		return NULL;
	free(node);
	*pServiceUserCount--;
}