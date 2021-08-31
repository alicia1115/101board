#include<stdio.h>

void cal_grade(int score);

void main(void)
{
	int C_score, java_score, CA_score;
	printf("씨언어 점수를 입력하시오 : ");
	scanf_s("%d", &C_score);
	cal_grade(C_score);

	printf("자바 점수를 입력하시오 : ");
	scanf_s("%d", &java_score);
	cal_grade(java_score);

	printf("컴퓨터구조 점수를 입력하시오 : ");
	scanf_s("%d", &CA_score);
	cal_grade(CA_score);
}

// 입력받은 점수에 대한 등급을 출력
void cal_grade(int score)
{
	if (score >= 90 && score <= 100)
		printf("A\n");
	else if (score >= 80)
		printf("B\n");
	else if (score >= 70)
		printf("C\n");
	else if (score >= 60)
		printf("D\n");
	else
		printf("E\n");
}