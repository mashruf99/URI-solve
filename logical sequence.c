#include <stdio.h>

int main() {
    int a,i,x=1;
    scanf("%d",&a);
    for(i=0 ; i<a ;i++){
            printf("%d %d %d\n%d %d %d\n",x,x*x,x*x*x,x,(x*x)+1,(x*x*x)+1);
    x++;

    }



    return 0;
}
