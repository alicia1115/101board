#include<stdio.h>

void cal_grade(int score);

void main(void)
{
	int C_score, java_score, CA_score;
	printf("����� ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &C_score);
	cal_grade(C_score);

	printf("�ڹ� ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &java_score);
	cal_grade(java_score);

	printf("��ǻ�ͱ��� ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &CA_score);
	cal_grade(CA_score);
}

// �Է¹��� ������ ���� ����� ���
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