#include <stdio.h>

int main() {
    int i,c=0;
    float n[6];

for(i=0;i<6;i++){
    scanf ("%f",&n[i]);
    if(n[i]>=0)
        c++;
}
printf("%d valores positivos\n",c);

    return 0;
}
