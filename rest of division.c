#include <stdio.h>

int main() {
    int a,b,temp=0,i;
    scanf("%d %d",&a,&b);

    if (b>a){
        temp=b;
        b=a;
        a=temp;
    }
    for(i=b+1; i<a ; i++){
        if (i%5==2 || i%5==3){
            printf("%d\n",i);
        }
    }



    return 0;
}
