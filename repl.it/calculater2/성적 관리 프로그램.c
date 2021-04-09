#include "stdio.h"

int main(void) {
  float korean;
  float english;
  float math;
  float science;
  float average;
  scanf("%f%f%f%f",&korean,&english,&math,&science);
  average = (korean+english+math+science)/4;
  printf("당신의 이번 국어성적%f점,영어성적%f점,수학점수%f점,과학점수%f점으로,평균은%f 입니다.", korean, english, math, science, average);
  return 0;
}