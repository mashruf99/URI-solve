#include <stdio.h>

int main() {
    int a,m,i,j,div=0;
    scanf("%d",&a);
    for(i=0; i<a; i++) {
        scanf("%d",&m);
        div=0;
        for(j=1; j<m; j++) {
            if(m%j==0) {
                div+=j;
            }
        }
        if(div==m){
                printf("%d eh perfeito\n",m);
        }
        else {
                printf("%d nao eh perfeito\n",m);
        }
    }

    return 0;
}
