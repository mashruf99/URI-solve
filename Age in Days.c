#include <stdio.h>

int main() {
    int y,m,d,a,b,c,e;
    scanf("%d",&a);

     b=a/365;
     c=(a%365)/30;
     e=(a%365)%30;
     printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",b,c,e);

    return 0;
}
