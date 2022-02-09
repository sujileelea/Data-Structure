/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   peekFrontLD.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:49:01 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/09 15:40:11 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkeddeque.h"

DequeNode* peekFrontLD(LinkedDeque* pDeque)
{
	DequeNode *frontNode;
	
	if (!pDeque)
		return NULL;
	frontNode = pDeque->pFrontNode;
	return (frontNode);
}