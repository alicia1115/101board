// printf 함수를 가지고 있음.
#include <stdio.h>

// malloc, free 함수를 가지고 있음.
#include <stdlib.h>

void main(void)
{
	// 정적할당 (a, ptr1은 지역변수 이므로 stack영역에 할당)
	int a = 3;
	int* ptr1 = &a;
	*ptr1 = 4;
	printf("%d \n", *ptr1);

	// 동적할당 (malloc으로 할당된 공간은 heap영역에 할당)
	// 다만 지역변수 ptr2는 stack 영역에 할당
	int* ptr2 = (int*)malloc(sizeof(int));
	*ptr2 = 10;
	printf("%d \n", *ptr2);
	free(ptr2);
}