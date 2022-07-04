#include <stdio.h>

int main() {
    int a,m,s=1;
    scanf("%d",&a);
    for(m=a; m>=1 ; m--){
        s=s*m;
        }
        printf("%d\n",s);

    return 0;
}
