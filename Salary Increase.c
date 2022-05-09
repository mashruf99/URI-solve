#include <stdio.h>

int main() {
    float a,x;
    scanf("%f",&a);
    char c= '%';
    a<!0 ;
if (a>=0.00 && a<=400.00 ){
        x=a*.15;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %c\n",a+x,x,c);
}
else if (a>400.01 && a<=800.00){
        x=a*.12;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %c\n",a+x,x);
}
else if (a>800.01 && a<=1200.00){
        x=a*.10;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %c\n",a+x,x,c);
}
else if (a>1200.01 && a<=2000.00){
        x=a*.07;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %c\n",a+x,x,c);
}

else {
        a>2000.01;
        x=a*.04;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %c\n",a+x,x,c);
};
    return 0;
}
