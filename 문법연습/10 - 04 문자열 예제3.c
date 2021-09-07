#include <stdio.h>

void main(void)
{
	char str[20] = "Hello World";

	// 'W' 다음에 널문자를 주어서 문자열을 끊음
	str[7] = '\0';
	printf("%s\n", str);
}