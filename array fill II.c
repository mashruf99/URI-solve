#include <stdio.h>

int main() {
    int a,i,k=0;
    scanf("%d",&a);
    if(a>=2 && a<=50) {
        printf("N[0] = 0\n");
        for(i=1; i<1000; i++) {

            k=k+1;
            if(k==a) {
                k=0;
            }
            printf("N[%d] = %d\n",i,k);

        }
    }
    return 0;
}
