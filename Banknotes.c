#include<stdio.h>
int main(){
     int v,w,x,y,z,k,a,b,c,d,e,l,m,f;
     scanf("%d",&f);
     printf("%d\n",f);

     a= (int) (f/100);
     v=f%100;
     printf("%d nota(s) de R$ 100,00\n",a);

     b=(int) (v/50);
     w=v%50;
     printf("%d nota(s) de R$ 50,00\n",b);

     c=(int) (w/20);
     x=w%20;
     printf("%d nota(s) de R$ 20,00\n",c);

     d=(int) (x/10);
     y=x%10;
     printf("%d nota(s) de R$ 10,00\n",d);

     e=(int) (y/5);
     z=y%5;
     printf("%d nota(s) de R$ 5,00\n",e);

     l=(int) (z/2);
     k=z%2;
     printf("%d nota(s) de R$ 2,00\n",l);

     m=(int) (k/1);
     printf("%d nota(s) de R$ 1,00\n",m);
     return 0;
}
