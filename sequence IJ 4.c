#include <stdio.h>

int main() {
    float i, j ;
    int I,J;
    for(i=0 ; i<2.1 ; i+=.2) {
        for(j=1.0 ; j<=3.0 ; j++) {
            if(i>0 && i<1 || i>1 && i<2) {
                printf("I=%.1f J=%.1f\n",i,i+j);
            } else {
                I=i;
                J=j;
                printf("I=%d J=%d\n",I,I+J);
            }
        }
    }

    return 0;
}

/* https://www.beecrowd.com.br/judge/en/problems/view/1098 */
