#include <stdio.h>
// malloc함수를 가지고 있음.
#include <stdlib.h>

void main(void)
{
	// 정적할당 (컴파일 시간에 16bytes로 결정, stack 영역에 할당되는 지역변수)
	int arr[4] = { 10, 20, 30, 40 };

	int length = 4;

	// UNUSED : 동적할당을 적나라하게 보여주기 위한 코드
	//printf("배열의 길이를 입력하세요 :");
	//scanf("%d", &length);

	// 실행시간에 메모리가 결정되는 동적할당(heap 영역)
	int* ptr = (int*)malloc(length * sizeof(int));

	ptr[0] = 10, ptr[1] = 20, ptr[2] = 30, ptr[3] = 40;

	//동적할당된 공간ㅇ르 해제
	free(ptr);
}