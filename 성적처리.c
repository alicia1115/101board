#include <stdio.h>

void main(void)
{
	int c_score;
	printf("C언어 점수를 입력하시오 : ");
	scanf_s("%d", &c_score);

	if (c_score >= 90 && c_score <= 100)
		printf("A");
	else if (c_score >= 80)
		printf("B");
	else if (c_score >= 70)
		printf("C");
	else if (c_score >= 60)
		printf("D");
	else
		printf("E");
	printf("\n");

	int java_score;
	printf("자바 점수를 입력하시오 : ");
	scanf_s("%d", &java_score);

	if (java_score >= 90 && java_score <= 100)
		printf("A");
	else if (java_score >= 80)
		printf("B");
	else if (java_score >= 70)
		printf("C");
	else if (java_score >= 60)
		printf("D");
	else
		printf("E");
	printf("\n");

	int ca_score;
	printf("컴퓨터구조 점수를 입력하시오 : ");
	scanf_s("%d", &ca_score);

	if (ca_score >= 90 && ca_score <= 100)
		printf("A");
	else if (ca_score >= 80)
		printf("B");
	else if (ca_score >= 70)
		printf("C");
	else if (ca_score >= 60)
		printf("D");
	else
		printf("E");
	printf("\n");

	return 0;
}