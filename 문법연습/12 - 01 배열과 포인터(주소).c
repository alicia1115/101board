#include <stdio.h>

void main(void)
{
	int arr[4];
	printf("arr 0번째 공간의 주소 : %p \n", &arr[0]);
	printf("arr 배열의 시작 주소 : %p \n", arr);
	printf("arr 1번째 공간의 주소 : %p \n\n", &arr[1]);

	char str[4];
	printf("str 0번째 공간의 주소 : %p \n", &str[0]);
	printf("str 배열의 시작 주소 : %p \n", str);
	printf("str 1번째 공간의 주소 : %p \n", &str[1]);

	return 0;
}