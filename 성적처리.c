#include <stdio.h>

void cal_grade(int score);
float average(int a, int b, int c);

void main(void)
{
    float avg;          //평균
    int subject[3];     //과목

    printf("씨언어 점수를 입력하시오 : ");
    scanf("%d", &subject[0]);
    cal_grade(subject[0]);


    printf("자바 점수를 입력하시오 : ");
    scanf("%d", &subject[1]);
    cal_grade(subject[1]);

 
    printf("컴퓨터구조 점수를 입력하시오 : ");
    scanf("%d", &subject[2]);
    cal_grade(subject[2]);

    avg = average(subject[0], subject[1], subject[2]);
    printf("세 과목의 평균은 %f입니다\n", avg);
}

// 입력받은 점수(score)에 대한 등급을 출력
void cal_grade(int score)
{
    if (90 <= score && score <= 100)
        printf("A");
    else if (80 <= score && score < 90)
        printf("B");
    else if (70 <= score && score < 80)
        printf("C");
    else if (60 <= score && score < 70)
        printf("D");
    else
        printf("E");

    printf("\n");
}

// 세 점수의 평균을 반환
float average(int a, int b, int c)
{
    return (a + b + c) / 3.f;
}