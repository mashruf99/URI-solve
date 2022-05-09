#include <stdio.h>

int main() {
  float a,b,c,x;
scanf("%f%f%f",&a,&b,&c);

if(a<=b+c && b<=a+c && c<=a+b ){
    printf("Area = %.1f\n",.5*(a+b)*c);
}
 else {
    printf("Perimetro = %.1f",a+b+c);
 };
    return 0;
}
