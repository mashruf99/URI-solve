#include <stdio.h>

int main() {
  int a,b,t;
  scanf("%d%d",&a,&b);

  a+b==24;
  if (a==b){
    printf("O JOGO DUROU 24 HORA(S)\n");
  }
  else if (a>b){
     printf("O JOGO DUROU %d HORA(S)\n",t=(24-(a-b)));
  }
   else {
     printf("O JOGO DUROU %d HORA(S)\n",t=(b-a));
  }
    return 0;
}
