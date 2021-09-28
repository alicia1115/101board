#include <stdio.h>

void changeA(int num);

void main(void)
{
	int A = 3;
	printf("바꾸기 전 %d\n", A);
	// 함수의 argument로 A의 주소값을 넘김
	// 변수 A 자체를 넘기는것이 아니다.
	changeA(A);
	printf("바꾸기 후 %d\n", A);
}

void changeA(int num)
{
	num = 5;
}