#include <stdio.h>

int main() {
     int a,i;
     float x,y,ans;

     scanf("%d",&a);
     for(i=1 ; i<=a; i++){
        scanf("%f %f",&x,&y);
        if(y==0){
            printf("divisao impossivel\n");
        }
        else if (x==0){
            printf("0.0\n");
        }
        else {
                ans=(x/y);
                printf("%.1f\n",ans);
        }
     }

    return 0;
}

/* https://www.beecrowd.com.br/judge/en/problems/view/1116 */
