#include <stdio.h>
int main() {
  int a,b,i,d=0,sum=0;
  scanf("%d %d",&a,&b);

 if (a>b && b%2==0){
     d=b+1;
  for(i=d;i<a;i=i+2){
       sum=sum+i;
  }
 }
 else if (a>b && b%2!=0){
     d=b+2;
  for(i=d;i<a;i=i+2){
       sum=sum+i;
  }
 }

 else if (a<b && a%2==0){
     d=a+1;
  for(i=d;i<b;i=i+2){
       sum=sum+i;
  }
 }
 else if (a<b && a%2!=0){
        d=a+2;
  for(i=a;i<b;i=i+2){
       sum=sum+i;
  }
 }
 printf("%d\n",sum);

    return 0;
}
