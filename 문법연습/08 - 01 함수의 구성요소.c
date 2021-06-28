#include <stdio.h>

//두 개의 숫자에 0.14를 더해서 반환하는 함수
double sum(int num1, int num2)
{
	return (double)(num1 + num2) + 0.14;
}

void main(void)
{
	double a = sum(1, 2);
	printf("%lf", a);
}