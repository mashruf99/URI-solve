#include <stdio.h>

int main() {
    int a,i,m,n,j,s=0;
    scanf("%d",&a);
    for(i=0; i<a; i++){
        scanf("%d %d",&m,&n);
        if (m%2==0)
            m++;
        for(j=0; j<n; j++){
            s+=m;
            m+=2;
    }

        printf("%d\n",s);
        s=0;
    }

    return 0;
}
