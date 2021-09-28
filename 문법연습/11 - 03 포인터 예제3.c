#include <stdio.h>

void main(void)
{
	int num1 = 3, num2 = 30;
	printf("num1 안에 들어있는 값 %d\n", num1);
	printf("num2 안에 들어있는 값 %d\n\n", num2);
 	
	// ptr이 num1을 가리킴 (int* ptr = &num1;)
	int* ptr = &num1;
	ptr = &num1;

	*ptr = 4;
	// ptr이 num1를 가리킴
	ptr = &num2;
	*ptr = 40;
	printf("num1 안에 들어있는 값 %d\n", num1);
	printf("num2 안에 들어있는 값 %d\n", num2);
}