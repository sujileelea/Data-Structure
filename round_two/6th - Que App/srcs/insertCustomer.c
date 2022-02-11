/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertCustomer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:00:22 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/11 16:52:332 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "simutil.h"

void insertCustomer(int arrivalTime, int serviceTime, LinkedQueue *pArrivalQueue)
{
	QueueNode	node;
	int			result;

	if (!pArrivalQueue)
		return ;
	node.data.status = arrival;
	node.data.arrivalTime = arrivalTime;
	node.data.serviceTime = serviceTime;
	node.data.startTime = 0;
	
	result = insertRearLD(pArrivalQueue, node);
	if (!result)
		return ;
}