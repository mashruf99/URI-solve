#include <stdio.h>

int main() {
  int a,b,i,x=0,y=0;

  scanf("%d",&a);
  for (i=0; i<a ; i++){
    scanf("%d",&b);
  if(b>=10 && b<=20){
        x++;
  }
  else {
      y++;
   }
  }
  printf("%d in\n",x);
  printf("%d out\n",y);

    return 0;
}
