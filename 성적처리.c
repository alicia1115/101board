#include <stdio.h>

// 입력받은 점수에 대한 등급을 출력
void cal_grade(int score)
{
	if (score >= 90 && score <= 100)
		printf("A");
	else if (score >= 80)
		printf("B");
	else if (score >= 70)
		printf("C");
	else if (score >= 60)
		printf("D");
	else
		printf("E");

	printf("\n");
}

void main(void)
{
	int C_score;
	printf("C언어 점수를 입력하시오 : ");
	scanf("%d", &C_score);

	cal_grade(C_score);

	int java_score;
	printf("자바 점수를 입력하시오 : ");
	scanf("%d", &java_score);

	cal_grade(java_score);

	int CA_score;
	printf("컴퓨터구조 점수를 입력하시오 : ");
	scanf("%d", &CA_score);

	cal_grade(CA_score);

	return 0;
}