/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isArrayQueueEmpty.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:39:39 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/09 13:16:06 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arrayqueue.h"

int isArrayQueueEmpty(ArrayQueue* pQueue)
{
  if (!pQueue)
    return FALSE;
  if (pQueue->currentElementCount == 0)
    return TRUE;
  else
    return FALSE;
}