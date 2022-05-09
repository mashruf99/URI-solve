#include <stdio.h>

int main() {
     float a,b,c,d,xr,xq;
     scanf("%f%f%f",&a,&b,&c);

     d = (pow(b, 2) - (4 * a * c));
     xr=((-b+sqrt(d))/(2*a));
     xq=((-b-sqrt(d))/(2*a));

   if (a!=0 && d>0){
    printf("R1 = %.5lf\nR2 = %.5lf\n",xr,xq);
   }
     else {
        printf("Impossivel calcular\n");
     }


    return 0;
}
