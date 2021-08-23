#include <stdio.h>

//함수의 정의(definition)
int sum(int a, int b)
{
	return a + b;
}

void main(void)
{
	int c = sum(1, 2);
	printf("%d", c);
}