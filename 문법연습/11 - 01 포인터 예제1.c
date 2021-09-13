#include <stdio.h>

void main(void)
{
	int num = 3;
	int* ptr = &num;
	//int *ptr = &num; 두가지 방법

	printf("num안에 들어있는 값 %d\n", num);
	printf("num의 메모리 주소 값 %p\n", &num);
	printf("ptr안에 들어있는 값 %p\n", ptr);
}