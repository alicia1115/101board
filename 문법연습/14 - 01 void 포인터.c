#include <stdio.h>

void main(void)
{
	int num = 3;
	int* ptr = &num;
	void* vptr = &num;

	//num의 주소값
	printf("%p %p %p \n", &num, ptr, vptr);

	//3이 출력
	printf("%d %d \n", num, *ptr);

	//void* 자료형은 내부값을 볼 수 없다(역참조 불가)
	//printf("%d \n", *vptr);
}