#include <stdio.h>

int main() {
    int a,b=0,c=0,d=0;
    printf("MUITO OBRIGADO\n");
    while(1) {
        scanf("%d",&a);
        if(a>=5 || a<=0) {
            continue;
        } else if(a==1) {
            b=b+1;
        } else if(a==2) {
            c=c+1;
        } else if(a==3) {
            d=d+1;
        } else break;

    }
    printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n",b,c,d);


    return 0;
}
