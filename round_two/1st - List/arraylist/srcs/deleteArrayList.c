/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deleteArrayList.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 14:38:27 by sujilee           #+#    #+#             */
/*   Updated: 2022/01/30 15:28:28 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"

void deleteArrayList(ArrayList* pList)
{
	int idx = 0;

	if (!pList)
		return ;
	while (idx < pList->currentElementCount)
	{
		free(&(pList->pElement[idx]));
		idx++;
	}
	pList->currentElementCount = 0;
	pList->maxElementCount = 0;
	free(pList);
	return ;
}