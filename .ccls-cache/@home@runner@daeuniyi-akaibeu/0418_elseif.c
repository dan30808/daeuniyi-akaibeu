#include <stdio.h>
main(){
  int x;  
  printf("1번 사과, 2번 포도, 3번 복숭아, 4번 딸기\n");
  scanf("%d" , &x);
  
  if(x==1)
    printf("사과를 좋아하는군요!");
  else if(x==2)
    printf("포도를 좋아하는군요!");
  else if(x==3)
    printf("복숭아를 좋아하는군요!");
  else if(x==4)
    printf("딸기를 좋아하는군요!");
  else
    printf("당신은 아마도 과일을 좋아하지 않는 것 같군요");
  printf("좋아하는 과일 조사 끝");
}