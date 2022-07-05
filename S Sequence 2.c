#include <stdio.h>

int main() {
    float s=0,i,m=2;
    for(i=3; i<=39; i=i+2) {
        s+=(i/m);
        m=m*2;
    }
    printf("%.2f\n",s+1);

    return 0;
}
