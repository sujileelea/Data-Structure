/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:32:02 by sujilee           #+#    #+#             */
/*   Updated: 2022/02/09 13:22:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arrayqueue.h"

int main()
{
	ArrayQueue *myArray;
	ArrayQueueNode *curr;
	ArrayQueueNode node0 = {0};
	int max;
	int number = 0;
	int pushNum = 0;
	printf("input maxsize: ");
	scanf("%d", &max);
	myArray = createArrayQueue(max);
	while(1)
	{
		printf("1 : Enqueue Arraynode\n2 : Dequeue Arraynode\n3 : Peek Arraynode\n4 : Display ArrayQueue\n5 : Delete ArrayQueue\n6 : is ArrayQueue Empty?\n7 : is ArrayQueue FUll?\n");
		printf(">> ");
		scanf(" %d", &number);
		switch (number)
		{
		case 1:
			printf("data: ");
			scanf("%d", &(node0.data));
			pushNum = enqueueAQ(myArray, node0);
			break;
		case 2:
			curr = dequeueAQ(myArray);
			if (!isArrayQueueEmpty(myArray))
				printf("dequeued data : %d\n", curr->data);
			break;
		case 3:
			curr = peekAQ(myArray);
			if(curr)
				printf("Front's data : %d\n", curr->data);
			break;
		case 4:
			displayArrayQueue(myArray);
			break;
		case 5:
			deleteArrayQueue(&myArray);
			break;
		case 6:
			if (isArrayQueueEmpty(myArray))
				printf("arrayQueue is empty\n");
			break;
		case 7:
			if (isArrayQueueFull(myArray))
				printf("arrayQueue is full");
			break;
		default:
			break;
		}
		if (number == 5)
			break;
	}
	system("leaks arrayqueue");
	return (0);
}