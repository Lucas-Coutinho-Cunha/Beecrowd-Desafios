#include <stdio.h>

int main(){

    char a[20];
    scanf("%s",a);

    double b;
    double c;
    scanf("%lf",&b);
    scanf("%lf",&c);
    c *= 0.15;
    double x = c + b;

    printf("TOTAL = R$ %.2lf\n",x);

    return 0;
}