#include <stdio.h>

void main(void)
{
	// 정적할당 (컴파일 시간에 16bytes로 결정)
	int arr[4] = { 10, 20, 30, 40 };

	int length;
	printf("배열의 길이를 입력하세요 :");
	scanf("%d", &length);

	// 실행시간에 메모리가 결정되는 동적할당
	void* ptr = malloc(length);

}