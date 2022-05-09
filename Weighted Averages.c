#include <stdio.h>

int main() {
 float x,y,z,m;
 int i;
for( i=0 ; i<3 ; i++){
    scanf("%f %f %f",&x, &y ,&z);
    m=(x+y+z)/3;
    printf("%.1f\n",m);
 }


    return 0;
}
