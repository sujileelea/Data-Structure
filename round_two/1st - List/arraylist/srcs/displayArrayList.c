/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   displayArrayList.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 14:38:27 by sujilee           #+#    #+#             */
/*   Updated: 2022/01/30 15:37:08 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"

void displayArrayList(ArrayList* pList)
{
	int idx = 0;

	if (!pList)
		return ;
	printf("currcnt : %d\n", pList->currentElementCount);
	while (idx <= pList->currentElementCount - 1)
	{
		printf("index : %d, data : %d\n", idx, pList->pElement[idx].data);
		idx++;
	}
	return ;
}