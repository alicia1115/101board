#include <stdio.h>

void main(void)
{
	int arr[4];
	// 공간 하나당 4바이트씩 차이
	printf("arr 0번째 공간의 주소 : %p \n", &arr[0]);
	printf("arr 배열의 시작 주소 : %p \n", arr);
	printf("arr 1번째 공간의 주소 : %p \n", &arr[1]);

	//arr+1과 &arr[1]은 같다(4바이트 차이)
	printf("arr 1번째 공간의 주소 : %p \n\n", arr+1);

	char str[4];
	// 공간 하나당 1바이트씩 차이
	printf("str 0번째 공간의 주소 : %p \n", &str[0]);
	printf("str 배열의 시작 주소 : %p \n", str);
	printf("str 1번째 공간의 주소 : %p \n", &str[1]);
	
	//str+1과 &str[1]은 같다(1바이트 차이)
	printf("str 1번째 공간의 주소 : %p \n", str+1);

	return 0;
}
