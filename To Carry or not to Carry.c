#include <stdio.h>

int main() {
    int long unsigned i,j;
    while(scanf("%lu %lu",&i,&j) != EOF) {
        printf("%lu\n",i^j);
    }

    return 0;
}
