#include <stdio.h>

void main(void)
{
	int num = 3;
	int* ptr = &num;
	//int *ptr = &num; �ΰ��� ���

	printf("num�ȿ� ����ִ� �� %d\n", num);
	printf("num�� �޸� �ּ� �� %d\n", &num);
	printf("ptr�ȿ� ����ִ� �� %d\n", ptr);
}