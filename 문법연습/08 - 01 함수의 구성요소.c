#include <stdio.h>

// 두 개의 숫자를 더해서 반환하는 함수
int sum(int num1, int num2)
{
	printf("%d\n", num1 + num2);
}

void main(void)
{
	sum(1, 2);
}