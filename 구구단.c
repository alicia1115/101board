#include <stdio.h>
void main(void)
{
	for (int dan = 2; dan <= 3; dan++)
	{
		for (int i = 1; i <= 9; i++)
		{
			printf("%d x %d = %d \n", dan, i, dan * i);
		}
	}
	
}