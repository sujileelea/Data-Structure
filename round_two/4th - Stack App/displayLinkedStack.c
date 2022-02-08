/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   displayLinkedStack.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:30:20 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/07 14:54:19 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedstack.h"

void		displayLinkedStack(LinkedStack* history)
{
	LinkedStack * rev = createLinkedStack();
	StackNode *curr;

	curr = history->pTopElement;

	if (!history)
		return ;
	while (curr)
	{
		pushLS(rev, *curr);
		curr = curr->pLink;
	}

	curr = rev->pTopElement;
	while (curr)
	{
		printf("(%d, %d) : %d\n", curr->data.x, curr->data.y, curr->data.direction);
		curr = curr->pLink;
	}
}