#include <stdio.h>

int main() {
    int a,b=0,i;
    scanf("%d",&a);
    for (i=2 ; i<=a ; i=i+2){
        b=i;
        printf("%d^2 = %d\n",b,b*b);
    }
    return 0;
}
