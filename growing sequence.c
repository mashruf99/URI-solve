#include <stdio.h>

int main() {
    int a,i;

    while(1) {
        scanf("%d",&a);
        if(a==0) break ;
        printf("1");

         if(a==1){
             printf("\n");
             continue;
        }
         else{
            for(i=2 ; i<=a ;i++){
                printf(" %d",i);
            }
         }
         printf("\n");

    }
    return 0;
}
