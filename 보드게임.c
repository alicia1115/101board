/*
* 보드게임
* 총 40칸
* 플레이의 속성
*		1. 돈 : 2,000(단위 백만)시작
*		2. 현재위치 : 0부터 시작
*		3. 황금열쇠
*			원하는 곳 갈수 있음
*			돈을 랜덤하게 준다(-5억 ~ +5억)
*			TODO : 돈을 뺏는다
* 
*	주사위 1 ~ 6
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(void) {
	//플레이어의 위치(0부터 시작)
	int position = 0;
	int dice;

	srand(time(0));
	dice = rand() % 6 + 1;

	printf("%d\n", dice);
}