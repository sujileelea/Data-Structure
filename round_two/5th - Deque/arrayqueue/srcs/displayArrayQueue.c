/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   displayArrayQueue.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:24:25 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/09 13:49:444 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arrayqueue.h"

void displayArrayQueue(ArrayQueue* pQueue)
{
	int	j;

	if (!pQueue)
		return ;
	j = pQueue->front;
	for (int i = 0; i < pQueue->currentElementCount; i++)
	{
		printf("index : %d, data : %d\n", j, pQueue->pElement[j].data);
		j = (j + 1) % pQueue->maxElementCount;
	}
}