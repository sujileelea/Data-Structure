/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clearArrayList.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 14:38:27 by sujilee           #+#    #+#             */
/*   Updated: 2022/01/30 15:25:42 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"

void clearArrayList(ArrayList* pList)
{
	if (!pList)
		return ;
	pList->currentElementCount = 0;
}