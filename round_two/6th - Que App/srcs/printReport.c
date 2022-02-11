/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printReport.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:00:22 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/11 18:05:13 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "simutil.h"

void printReport(LinkedQueue *pWaitQueue, LinkedQueue *pArrivalQueue, int serviceUserCount, int totalWaitTime)
{
	if (!pWaitQueue || !pArrivalQueue)
    {
        printf("Error\n");
		return ;
    }

    if (pWaitQueue->currentElementCount > 0 || pArrivalQueue->currentElementCount > 0)
        printf("Service ended with customers left.\n");
	printf("Number of customers who got serviced: %i\n", serviceUserCount);
    printf("Total wait time : %i\n", totalWaitTime);
}