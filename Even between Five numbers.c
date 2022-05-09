#include <stdio.h>

int main() {
  int i,c,sum=0;
  for(i=0;i<5;i++){
        scanf("%d",&c);
    if (c%2==0){
        sum++;
    }
  }
printf("%d valores pares\n",sum);

    return 0;
}
