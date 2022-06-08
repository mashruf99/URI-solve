#include <stdio.h>

int main() {
    int a,b,c,d,i,j,x=1;
    scanf("%d %d",&a,&b);
    c=b/a;
    d=a;
    for(i=1 ; i<=c ; i++) {
        printf("%d",x);
        for(j=x+1 ; j<=d ; j++)
            printf(" %d",j);
        printf("\n");
        x+=a;
        d+=a;
    }
    return 0;
}
