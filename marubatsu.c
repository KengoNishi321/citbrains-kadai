//勝負の判定ができていない
//〇×の座標が正しく入力できない

#include<stdio.h>
int main(){
    int i,j;   //iが行でjが列を意味している
    int ban[2][2];

    int t=0;
    while(t!=9){
 if(t==0){
        printf("Player1\n");
        printf("行");
        scanf("%d",&i);
        printf("列");
        scanf("%d",&j);
        ban[i][j]=1;
        t++;
       
      }else{
        printf("Player2\n");
        printf("行");
        scanf("%d",&i);
        printf("列");
        scanf("%d",&j);
        ban[i][j]=2;
        t--;
        }

      for(j=0;j<3;j+=1){
        for(i=0;i<3;i+=1){
          if(ban[j][i]==1){
            printf("〇");
          }
          if(ban[j][i]==2){
            printf("✖");
          }
         
        }
        printf("\n");
      }
    }

    return 0;
  }