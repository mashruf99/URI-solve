#include <stdio.h>

int main() {
    int n,i;

    scanf("%d",&n);
    printf("N[0] = %d\n",n);

    for(i=1; i<10; i++) {

        n=n*2;
        printf("N[%d] = %d\n",i,n);
    }

    return 0;
}
