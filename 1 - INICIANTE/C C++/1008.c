#include <stdio.h>

int main(){

    int a;
    double b;
    double c;
    scanf("%d",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    double x = b*c;

    printf("NUMBER = %d\n",a);
    printf("SALARY = U$ %.2lf\n",x);

    return 0;
}