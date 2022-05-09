#include <stdio.h>

int main() {
   int a,i,d=0;
   scanf("%d",&a);

   if (a%2==0){
       d=a+1;
    for(i=d;i<=d+10;i=i+2){
        printf("%d\n",i);
    }
}
   else {
    for(i=a;i<=a+10;i=i+2){
        printf("%d\n",i);
    }
}
    return 0;
}

