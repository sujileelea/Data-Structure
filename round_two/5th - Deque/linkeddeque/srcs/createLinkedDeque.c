/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createLinkedDeque.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:42:29 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/09 14:47:07 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkeddeque.h"

LinkedDeque* createLinkedDeque()
{
	LinkedDeque *myDeque;

	myDeque = (LinkedDeque *)calloc(1, sizeof(LinkedDeque));
	if (!myDeque)
		return FALSE;
	return (myDeque);
}