#include <stdio.h>

int main() {
  int i,c=0;
  float num,sum=0;

  for(i=0;i<6;i++){
        scanf("%f",&num);

    if (num>0){
        sum=sum+num;
        c++;
    }
  }
  float ab = sum/c;
printf("%d valores positivos\n",c);
printf("%.1f",ab);

    return 0;
}
