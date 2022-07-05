#include <stdio.h>

int main() {
    float a,s=0,m=0;

    while(1){
       scanf("%f",&a);
        if (a<0)
        break;
       s=s+a;
        m=m+1;

    }
   printf("%.2f",(s/m));

    return 0;
}
