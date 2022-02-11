/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processArrival.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:00:22 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/11 17:02:50 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "simutil.h"

void processArrival(LinkedQueue *pArrivalQueue, LinkedQueue *pWaitQueue)
{
	QueueNode	*node;
	int			result;

	if (!pArrivalQueue || !pWaitQueue)
		return ;
    node = deleteFrontLD(pArrivalQueue);
	if (!node)
		return ;
	result = insertRearLD(pWaitQueue, *node);
    if (!result)
        return ;
}