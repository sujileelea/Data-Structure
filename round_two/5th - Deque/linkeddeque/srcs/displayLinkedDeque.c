/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deleteRearLD.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:49:01 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/09 15:23:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkeddeque.h"

void			displayLinkedDeque(LinkedDeque *pDeque)
{
	DequeNode	*curr;
	int			i = 0;
	
	if (!pDeque)
		return ;
	curr = pDeque->pFrontNode;
	while (curr)
	{
		printf("index : %d, data : %d\n", i, curr->data);
		curr = curr->pRLink;
		i++;
	}
	return ;
}