#ifndef _SIM_UTIL_
#define _SIM_UTIL_


#include "linkedqueue.h"


void insertCustomer(int arrivalTime, int serviceTime, LinkedQueue *pArrivalQueue);

void processArrival(int currentTime, LinkedQueue *pArrivalQueue, LinkedQueue *pWaitQueue);

QueueNode* processServiceNodeStart(int currentTime, LinkedQueue *pWaitQueue);

QueueNode* processServiceNodeEnd(int currentTime, QueueNode *pServiceNode,
					  int *pServiceUserCount, int *pTotalWaitTime);

void printSimCustomer(int currentTime, SimCustomer customer);

void printWaitQueueStatus(int currentTime, LinkedQueue *pWaitQueue);

void printReport(LinkedQueue *pWaitQueue, LinkedQueue *pArrivalQueue, int serviceUserCount, int totalWaitTime);

#endif