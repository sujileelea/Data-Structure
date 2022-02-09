/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deleteArrayQueue.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:45:54 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/09 13:32:32 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arrayqueue.h"

void deleteArrayQueue(ArrayQueue** pQueue)
{
	if (!pQueue || !(*pQueue))
		return ;
	free((*pQueue)->pElement);
  (*pQueue)->pElement = NULL;
	free(*pQueue);
  *pQueue = NULL;
	return ;
}