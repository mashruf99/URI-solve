#include <stdio.h>

int main() {
    int a,d,i,m;
    scanf("%d",&a);

    if (a>=1 && a<=1000 && a%2==0){
        d= a-1;
        for(i=1;i<=d;i=i+2){
            printf("%d\n",i);
        }
    }
    else {
            (a>=1 && a<=1000 && a%2!=0);
       for(i=1;i<=a;i=i+2){
            printf("%d\n",i);
      }
    };
    return 0;
}
