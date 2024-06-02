#include <stdio.h>

int main(){

    double a;
    double b;
    double c;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    a *= 2;
    b *= 3;
    c *= 5;

    double x = a + b + c;
    x /= 10;
    printf("MEDIA = %.1lf\n",x);

    return 0;
}