#include <stdio.h>

void main(void)
{
	int arr[4] = { 10,20,30,40 };
	int* ptr = arr;

	printf("%d %d %d \n", arr[0], arr[1], arr[2]);
	printf("%d %d %d \n", *(arr + 0), *(arr + 1), *(arr + 2));

	// 포인터를 배열처럼 쓸 수 있다.
	// 하지만 포인터는 배열이 아니다.
	printf("%d %d %d \n", ptr[0], ptr[1], ptr[2]);
	printf("%d %d %d \n", *(ptr + 0), *(ptr + 1), *(ptr + 2));

	printf("배열의 크기 %d \n", sizeof(arr));  //4개 * 4bytes
	printf("포인터의 크기 %d \n", sizeof(ptr)); // 4bytes

}