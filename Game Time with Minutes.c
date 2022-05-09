#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d %d", &a, &c, &b, &d);


    if (c>d){
        e= (60+d)-c;
        if(a>b){
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",((24+b)-a)-1,e);
        }
        else if (a<b){
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(b-a)-1,e);
        }
        else{
            printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n",e);
        }
    }

    else if(c<d){
            e=d-c ;

        if(a>b){
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(24+b)-a,e);
        }
        else if (a<b){
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(b-a),e);
        }
        else {
             printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",e);
        }
      }

    else {
        if(a>b){
            printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",(24+b)-a);
        }
        else if (a<b){
            printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",(b-a));
        }
        else{
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        }

    }


  return 0;
}
