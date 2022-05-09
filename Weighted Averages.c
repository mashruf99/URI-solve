#include <stdio.h>

int main() {
 float x,y,z,sum=0;
 int i,j,m;
  scanf("%d",&m);
for( i=0 ; i<m ; i++){
        for(j=0 ; j<3 ;j++ ){
    scanf("%f %f %f", &x, &y, &z);
     x *=2;
     y *=3;
     z *=5;
     for (j=0 ; j<3 ; j++){
        sum=x+y+z;
     }
        }
    printf("%.1f\n",sum/10);
}


    return 0;
}
