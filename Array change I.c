#include <stdio.h>

int main() {
    int a[6],n,i,j;

    for(i=0; i<6; i++){
        scanf("%d",&a[i]);
    }
    for(j=0; j<6; j++){
        n=a[j];
        a[i]=a[5-j];
        a[5-j]=n;
        printf("N[%d] = %d\n",j,a[i]);
    }



    return 0;
}
