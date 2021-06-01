/*
*	z : 549 507 6524
*	보드게임
*	총 40칸
*	플레이의 속성
*		1. 돈 : 20,000,000 시작
*		2. 현재위치 : 0부터 시작
		3. 황금열쇠
			원하는 곳 갈수 있음
			돈을 랜덤하게 준다( -5억 ~ +5억 )
			TODO : 돈을뺏는다

	주사위 1 ~ 6
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main(void)
{
	// 플레이어의 위치(0부터 시작)
	int position = 0;
	// 주사위
	int dice;
	// 돈은 2천만부터 시작
	int money = 20000000;

	srand(time(0));

	printf("현재위치 : %d, 현재금액 : %d \n\n", position, money);

	// 무한반복
	while (1)
	{
		//엔터키를 눌러서 진행시켜
		getchar();

		/* 던짐 */
		// 주사위는 1 ~ 6까지 나오게 설정
		dice = rand() % 6 + 1;
		printf("주사위를 던져서 %d가 나왔습니다.\n", dice);

		// 던진 주사위값을 현재 위치에 적용
		position += dice;
		printf("현재위치 : %d, 현재금액 : %d \n\n", position, money);

		// TEST CODE
		// position = 10;

		switch (position)
		{
			// TODO : printf 중복된 코드 제거하기
		case 10:
			printf("*위치 10*에 있을때 주사위를 다시 던집니다. \n");
			getchar();
			int dice_money = rand() % 6 + 1;
			money += 100000 * dice_money;
			printf("주사위가 %d이(가) 나와서 %d원을 획득하였습니다. \n", dice_money, 100000 * dice_money);
			printf("현재위치 : %d, 현재금액 : %d \n\n", position, money);
			break;

		case 20:
			printf("기부천사 - *위치 20*에 있을때 재산의 20%%를 사회에 기부합니다. \n");
			money = (int)(money * 0.8);
			printf("현재위치 : %d, 현재금액 : %d \n\n", position, money);
			break;

		case 30:
			printf("*위치 30*에 있을때, 주사위 던진만큼 더 나아갑니다.\n");
			position += dice;
			printf("현재위치 : %d, 현재금액 : %d \n\n", position, money);
			break;

		case 59:
			printf("위치 59에 있을때, 처음 지점으로 돌아갑니다.\n");
			position = 0;
			printf("현재위치 : %d, 현재금액 : %d \n\n", position, money);
			break;
		}

		// 범위를 지정해야 하는 조건에는 switch문이 불가능하다
		if (position > 60)
		{
			printf("축하합니다. 목적지에 도착하셨습니다.\n");
			break;
		}
	}

}