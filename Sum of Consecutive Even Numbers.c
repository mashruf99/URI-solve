#include <stdio.h>

int main() {
    int x,s=0,i;
    while(1) {
        scanf("%d",&x);
        if (x==0)break;
        else if (x%2==0) {
            for(i=1; i<=5; i++) {
                s+=x;
                x+=2;
            }
        } else {
            x%2!=0;
            x=x+1;
            for(i=1;i<=5; i++) {
                s+=x;
                x+=2;
            }
        }
        printf("%d\n",s);
        s=0;
    }


    return 0;
}
