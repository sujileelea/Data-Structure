/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deleteLinkedDeque.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:49:01 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/09 15:37:14 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkeddeque.h"

void			deleteLinkedDeque(LinkedDeque** pDeque)
{
	DequeNode	*curr;	
	DequeNode	*temp;
	
	
	if (!pDeque || !(*pDeque))
		return ;
	curr = (*pDeque)->pFrontNode;
	while (curr)
	{
		temp = curr;
		//temp와 curr의 주소가 동일하기 때문에 free(temp)를 먼저하면
		//curr의 값이 들어있는 주소 또한 free
		curr = curr->pRLink;
		free(temp);
		temp = NULL;
	}
	free(*pDeque);
	*pDeque = NULL;
}