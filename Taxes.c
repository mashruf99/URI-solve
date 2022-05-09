#include <stdio.h>

int main() {
  float a;
   scanf("%f", &a);

if  (a>=2000.01 && a<=3000.00){;
   printf("R$ %.2f\n",(a-2000.00)*0.08);
}
else if (a>=3000.01 && a<=4500.00){
    printf("R$ %.2f\n",((a-3000.00)*0.18+1000*.08));
}
else if (a>=4500.01){
    printf("R$ %.2f\n",((a-4500.00)*0.28+1500*.18+1000*.08));
}
else if (a<=2000.00){
    printf("Isento\n");
}
    return 0;
}

