#include<stdio.h>

int main(void){

int i, x[10] ,a=0;

  for (i = 0; i < 10; i++) {
    printf("数値%dを入力してください",i);
    scanf("%d", &x[i]);
    a = a + x[i];
   
  } 


 printf("配列計算の結果%d",a);
   



 return 0;
}
