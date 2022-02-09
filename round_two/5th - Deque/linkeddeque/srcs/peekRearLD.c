/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   peekRearLD.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:49:01 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/09 15:05:25 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkeddeque.h"

DequeNode* peekRearLD(LinkedDeque* pDeque)
{
  DequeNode *rearNode;

  if (!pDeque)
    return NULL;
  rearNode = pDeque->pRearNode;
  return (rearNode);
}