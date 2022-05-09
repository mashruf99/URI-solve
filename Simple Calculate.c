#include<stdio.h>
int main(){
     int a,b,m,n;
     double x,y,z;
     scanf("%d%d%lf%d%d%lf",&a,&b,&x,&m,&n,&y);

    z=b*x+n*y;
    printf("VALOR A PAGAR: R$ %.2lf\n",z);

return 0;
}
