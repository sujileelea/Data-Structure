#ifndef _ARRAY_STACK_
#define _ARRAY_STACK_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


typedef struct ArrayStackNodeType {
	int data;
} ArrayStackNode;

typedef struct ArrayStackType {
	int maxElementCount;		// 최대 원소 개수
	int currentElementCount;	// 현재 원소의 개수
	ArrayStackNode *pElement;	// 노드 저장을 위한 1차원 array
} ArrayStack;

ArrayStack* createArrayStack(int maxElementCount);
int pushAS(ArrayStack* pStack, ArrayStackNode element);
ArrayStackNode* popAS(ArrayStack* pStack);
ArrayStackNode* peekAS(ArrayStack* pStack);
void deleteArrayStack(ArrayStack* pStack);
int isArrayStackFull(ArrayStack* pStack);
int isArrayStackEmpty(ArrayStack* pStack);
void displayArrayStack(ArrayStack* pStack);

#endif

#ifndef _COMMON_STACK_DEF_
#define _COMMON_STACK_DEF_

#define TRUE		1
#define FALSE		0

#endif