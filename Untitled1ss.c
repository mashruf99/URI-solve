#include <stdio.h>
#include <math.h>
int main() {

    float n1,n2,n3,n4,n5,avg,newavg;
    printf("enter the obtained gpa of each sub: \n");
     scanf("%f%f%f%f", &n1,&n2,&n3,&n4);
    avg=(n1+n2+n3+n4)/4;
    ("obtained gpa: %f\n",avg);
    if(avg>6.9){
        printf("student approved\n");
        }
    else if(avg>=5.0){
        printf("in exam student\n");
        printf("enter 4th sub gpa: \n");
        scanf("%f",&n5);
        newavg=(avg+n5)/2;
        printf("media final: %f\n",newavg);
        if(newavg>4.9){
            printf("student approved\n");
            }
        else{
            printf("reproved student\n");
            }
    }
    else{
        printf("student reproved");
    }

    return 0;
}
