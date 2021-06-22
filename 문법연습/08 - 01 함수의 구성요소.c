#include <stdio.h>

// 두 개의 숫자를 더해서 반환하는 함수
int sum(int num1, int num2)
{
	return num1 + num2;
}

void main(void)
{
	int c;
	c = sum(1, 2);
	printf("%d\n", c);
}