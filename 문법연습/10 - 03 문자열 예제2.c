#include <stdio.h>

void main(void)
{
	//NULL문자('\0'가 포함되어서 12개의 공간을 할당
	char str[20] = "Hello World";
	printf("%d\n", sizeof(str));
	
	//문자열의 갯수를 세지 않고 널문자 여부만을 확인
	for (int i = 0; str[i] != '\0'; i++)
		printf("%c", str[i]);
}