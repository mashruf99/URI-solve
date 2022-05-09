#include <stdio.h>

int main() {
    char x;
    double a,b,c;
    scanf("%s%lf%lf",&x,&a,&b);

     c= a+b*.15;
     printf("TOTAL = R$ %.2lf\n",c);

    return 0;
}
