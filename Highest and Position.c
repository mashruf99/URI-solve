#include <stdio.h>

int main() {
   int a,max,i,ind=1;
   scanf("%d",&a);
   max=a;
   for(i=2 ; i<=100 ; i++) {
        scanf("%d",&a);
        if(max<a){
            max=a;
            ind=i;
        }
    }
    printf("%d\n%d\n",max,ind);
    return 0;
}
/*https://www.beecrowd.com.br/judge/en/problems/view/1080*/
