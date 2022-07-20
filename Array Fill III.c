#include <stdio.h>

int main() {
    int i;
    double a;
    scanf("%lf",&a);
    printf("N[0] = %.4f\n",a);
    for(i=1; i<100; i++) {
        a=a/2;
        printf("N[%d] = %.4lf\n",i,a);
    }

    return 0;
}
