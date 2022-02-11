/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printSimCustomer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:00:22 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/11 17:46:09 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:00:22 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/11 17:39:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "simutil.h"

void printSimCustomer(int currentTime, SimCustomer customer)
{
	if (customer.status == arrival)
		printf("Customer arrived.\n");
	else if (customer.status == start)
		printf("Customer service started.\n");
	else if (customer.status == end)
		printf("Customer service ended.\n");
}