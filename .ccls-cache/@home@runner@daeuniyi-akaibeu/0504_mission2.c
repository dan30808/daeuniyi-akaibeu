#include <stdio.h>
main(){
  int a;  
  printf("점수를 입력");
  scanf("%d" , &a);
  
  if(a>=90)
    printf("A");
  else if(a>=80&a<90)
    printf("B");
  else if(a>=70&a<80)
    printf("C");
  else if(a>=60&a<70)
    printf("D");
  else
    printf("E");
  printf("학점 조사 끝");
}