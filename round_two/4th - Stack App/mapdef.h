#ifndef _MAP_DEF_
#define _MAP_DEF_

#define WIDTH 8
#define HEIGHT 8
#define NUM_DIRECTIONS 4

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// offset: x, y
static int DIRECTION_OFFSETS[NUM_DIRECTIONS][2] = {
	{0, -1},		// 위쪽으로 이동.
	{1, 0},			// 오른쪽으로 이동.
	{0, 1},			// 아래쪽으로 이동.
	{-1, 0}			// 왼쪽으로 이동.
};

enum PosStatus { NOT_VISIT = 0, WALL = 1 , VISIT = 2  };

typedef struct MapPositionType
{
	int x;				// 현재 위치 x좌표.
	int y;				// 현재 위치 y좌표.
	int direction;		// 다음 위치로 이동 방향
} MapPosition;

#define NORTH 0 //위쪽
#define EAST 1 //오른쪽
#define SOUTH 2 //아래쪽
#define WEST 3 //왼쪽
#define NODIRECTION 4

#endif