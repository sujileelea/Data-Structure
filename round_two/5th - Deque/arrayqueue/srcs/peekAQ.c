/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   peekAQ.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:40:46 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/09 12:55:05 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arrayqueue.h"

ArrayQueueNode *peekAQ(ArrayQueue* pQueue)
{	
    ArrayQueueNode  *peekNode;
	
	if (!pQueue)
		return FALSE;
    peekNode = &pQueue->pElement[pQueue->front];
	return (peekNode);
}