#ifndef _SIM_UTIL_
#define _SIM_UTIL_


#include "simlinkedqueue.h"


// 고객 도착 -> 고객 대기 -> 서비스 노드 -> free 
// -> 디큐, 반환값을 다음 큐에 인큐



/**
 * 고객 리스트가 도착 큐에 있다가, 시스템타임과 고객 도착시간이 일치하면
 * 대기 큐로 넘어감. 고객이 은행에 도착했다는 의미.
 * serviceNode가 점유되어었으면
 * 현재 serviceNode를 끝낼 시간이니?
 * 맞으면 점유 해제, 아니면 계속 점유
 * serviceNode 비어있니?
 * 그럼 서비스 start
 */




// 고객 도착 큐에 고객 추가
void insertCustomer(int arrivalTime, int serviceTime, LinkedQueue *pArrivalQueue);

// 고객 도착 처리
// currentTime : system상 현재 시각
void processArrival(LinkedQueue *pArrivalQueue, LinkedQueue *pWaitQueue);

// 서비스 시작 처리
QueueNode* processServiceNodeStart(int currentTime, LinkedQueue *pWaitQueue);


// 서비스 종료 처리
QueueNode* processServiceNodeEnd(int currentTime, QueueNode *pServiceNode,
					  int *pServiceUserCount, int *pTotalWaitTime);

// 고객의 상태를 출력
void printSimCustomer(int currentTime, SimCustomer customer);

// 대기열의 상태를 출력
void printWaitQueueStatus(int currentTime, LinkedQueue *pWaitQueue);

// 최종 시뮬레이션 결과(통계치) 출력
void printReport(LinkedQueue *pWaitQueue, LinkedQueue *pArrivalQueue, 
				int serviceUserCount,
				int totalWaitTime);

#endif