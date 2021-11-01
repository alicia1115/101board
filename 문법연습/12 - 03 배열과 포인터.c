#include <stdio.h>

void main(void)
{
	int arr[4] = { 10, 20, 30, 40 };
	char str[4] = "ACE";

	printf("arr의 0번째 값 %d %d \n", arr[0], *arr);
	printf("arr의 1번째 값 %d %d \n", arr[1], *(arr + 1));
	printf("주의하기 *arr+1 %d \n \n", *arr + 1);

	printf("str의 0번쩨 값 %c %c \n", str[0], *str);
	printf("str의 1번째 값 %c %c \n", str[1], *(str + 1));
	printf("주의하기 *str+1 %c \n \n", *str + 1);
}