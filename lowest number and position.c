#include <stdio.h>
int main() {
    int a,n,p=0,x[1000],men;
    scanf("%d",&n);
    for(a=0; a<n; a++) {
        scanf("%d", &x[a]);
    }
    men=x[0];
    for(a=1; a<n; a++) {
        if(men>x[a]) {
            men=x[a];
            p=a;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", men, p);
    return 0;
}
