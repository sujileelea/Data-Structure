/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printWaitQueueStatus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:00:22 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/11 17:35:37 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "simutil.h"

void printWaitQueueStatus(LinkedQueue *pWaitQueue)
{
	QueueNode	*ptr;

	if (!pWaitQueue)
		return ;
	ptr = pWaitQueue->pFrontNode;
	while (ptr)
    {
        printf("Status : %i (Arrival Time : %i, Service Time : %i)\n", ptr->data.status, ptr->data.arrivalTime, ptr->data.serviceTime);
		ptr = ptr->pRLink;	
    }
}