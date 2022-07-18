#include <stdio.h>

int main() {
    int i,t,k;
    int a[60];
    a[0]=0;
    a[1]=1;
    for(i=2; i<61; i++)
        a[i]=a[i-1]+a[i-2];
    scanf("%d",&t);
    for(i=0; i<t; i++) {
        scanf("%d",&k);
        printf("Fib(%d) = %d\n",k,a[k]);
    }

    return 0;
}
