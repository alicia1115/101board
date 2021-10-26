#include <stdio.h>

void main(void)
{
	int i = 1;
	char c = 2;
	double d = 3.0;

	int* pi = &i;
	char* pc = &c;
	double* pd = &d;

	//pi : i(4바이트 변수)의 주소
	//pc : c(1바이트 변수)의 주소
	//pd : d(8바이트 변수)의 주소
	printf("%p %p %p \n", pi, pc, pd);

	//i, c, d 각각의 크기만큼 증가
	printf("%p %p %p \n", 1 + pi, 1 + pc, 1 + pd);
	printf("%p %p %p \n", &i + 1, &c + 1, &d + 1);


	return 0;
}