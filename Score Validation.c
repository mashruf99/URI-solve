#include <stdio.h>

int main() {
    float a,N[3],av;
    int i,j=0;
    while(1) {
        scanf("%f",&a);
        if(a>=0 && a<=10) {
            N[j]=a;
            j++;
        } else {
            printf("nota invalida\n");
        }
        if(j>1)
            break;

    }
    av=(N[0]+N[1])/2;
    printf("media = %.2f\n",av);


    return 0;
}

/*https://www.beecrowd.com.br/judge/en/problems/view/1117 */
