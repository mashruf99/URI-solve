#include <stdio.h>

int main() {
    int n,i,b;

 scanf("%d",&n);

 for(i=0;i<n;i++){
    scanf("%d",&b);

    if (b%2==0 && b>0){
        printf("Even Positive\n");
    }
    else if (b%2==0 && b<0){
        printf("Even Negative\n");
    }
    else if (b%2!=0 && b>0){
        printf("Odd Positive\n");
    }
    else if (b%2!=0 && b<0){
        printf("Odd Negative\n");
    }
    else {
        b==0;
        printf("Null\n");
    }
 }

    return 0;
}
