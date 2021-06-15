#include <stdio.h>
void main(void)
{
	for (int dan = 2; dan <= 9; dan++)
	{
		if (dan == 4)
		{
			continue; //바깥쪽 for문에 대한 break(4단만 skip)
		}
		for (int i = 1; i <= 9; i++)
		{
			if (i == 5)
			{
				continue; //안쪽 for문에 대한 continue(수5만 skip)
			}
			printf("%d x %d = %d \n", dan, i, dan * i);
		}
		printf("\n");
	}
	
}