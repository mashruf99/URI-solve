#include<stdio.h>
int main(){
    double A,B,C, TRI,CIR,TRA,QUA,RET;
    scanf("%lf %lf %lf",&A,&B,&C);

    TRI=.5*A*C;
    printf("TRIANGULO: %.3lf\n",TRI);

    CIR=3.14159*C*C;
    printf("CIRCULO: %.3lf \n",CIR);

    TRA=.5*(A+B)*C;
    printf("TRAPEZIO: %.3lf \n",TRA);

    QUA=B*B;
    printf("QUADRADO: %.3lf \n",QUA);

    RET=A*B;
    printf("RETANGULO: %.3lf\n",RET);

return 0;
}
