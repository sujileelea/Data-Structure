/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isArrayQueueFull.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:36:39 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/09 13:16:08 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arrayqueue.h"

int isArrayQueueFull(ArrayQueue* pQueue)
{
	if(!pQueue)
		return FALSE;
	if (pQueue->currentElementCount == pQueue->maxElementCount)
    	return TRUE;
 	 else
   		return FALSE;
}