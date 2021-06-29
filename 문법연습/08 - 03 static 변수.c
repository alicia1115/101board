#include <stdio.h>

//stack공간에 변수가 계속 할당되다가 함수가 끝나면 사라짐
void local_increase(void)
{
	int a = 0;
	printf("지역변수 %d \n", a);
	a++;
}

void main(void)
{
	for (int i = 1; i <= 5; i++) {
		local_increase();
	}
}