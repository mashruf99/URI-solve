#include <stdio.h>

int main() {
    int I,J;

    for (J=7; J>=5 ; J=J-1) {
        printf("I=1 J=%d\n",J);
    }
    for (J=9; J>=7 ; J=J-1) {
        printf("I=3 J=%d\n",J);
    }
    for (J=11; J>=9 ; J=J-1) {
        printf("I=5 J=%d\n",J);
    }
    for (J=13; J>=11 ; J=J-1) {
        printf("I=7 J=%d\n",J);
    }
    for (J=15; J>=13 ; J=J-1) {
        printf("I=9 J=%d\n",J);
    }

    return 0;
}

/* https://www.beecrowd.com.br/judge/en/problems/view/1097*/
