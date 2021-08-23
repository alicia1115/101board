#include <stdio.h>

// 함수의 선언
int sum(int a, int b);
int sum2(int a, int b);
int sum3(int a, int b);
int sum4(int a, int b);

void main(void)
{
	int c = sum(1, 2);
	printf("%d", c);
}


// 함수의 정의(definition)
int sum(int a, int b)
{
	// !!에러 sum2가 정의되기 전에 sum2를 호출함
	return sum2(a, b);
}

int sum2(int a, int b)
{
	return sum3(a, b);
}

int sum3(int a, int b)
{
	return a + b;
}

int sum4(int a, int b)
{
	return a + b;
}