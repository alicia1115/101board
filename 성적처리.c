#include <stdio.h>

// �Է¹��� ������ ���� ����� ���
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
	printf("C��� ������ �Է��Ͻÿ� : ");
	scanf("%d", &C_score);

	cal_grade(C_score);

	int java_score;
	printf("�ڹ� ������ �Է��Ͻÿ� : ");
	scanf("%d", &java_score);

	cal_grade(java_score);

	int CA_score;
	printf("��ǻ�ͱ��� ������ �Է��Ͻÿ� : ");
	scanf("%d", &CA_score);

	cal_grade(CA_score);

	return 0;
}