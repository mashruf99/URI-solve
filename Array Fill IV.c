#include <stdio.h>

int main() {
    int i,a,e[5],o[5],m=0,n=0,k;
    for(i=0; i<15; i++) {
        scanf("%d",&a);
        if(a%2==0) {
            e[m]=a;
            m++;
            if(m==5)  {
                for(k=0; k<5; k++) {
                    printf("par[%d] = %d\n",k,e[k]);
                    e[k]=0;
                }
                m=0;
            }
        } else {
            o[n]=a;
            n++;
            if(n==5)  {
                for(k=0; k<5; k++) {
                    printf("impar[%d] = %d\n",k,o[k]);
                    o[k]=0;
                }
                n=0;

            }
        }
    }
    for (k=0; k<5 ; k++) {
        if(o[k]==0)break;
        printf("impar[%d] = %d\n",k,o[k]);
    }
    for (k=0; k<5 ; k++) {
        if(e[k]==0)break;
        printf("par[%d] = %d\n",k,e[k]);
    }


return 0;
}
