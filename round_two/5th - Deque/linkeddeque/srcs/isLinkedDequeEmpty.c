/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isLinkedDequeEmpty.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:47:36 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/09 14:48:26 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkeddeque.h"

int isLinkedDequeEmpty(LinkedDeque* pDeque)
{
	if (!pDeque)
		return FALSE;
	if (pDeque->currentElementCount == 0)
		return TRUE;
	else
		return FALSE;
}