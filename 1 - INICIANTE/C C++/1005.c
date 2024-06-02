#include <stdio.h>

int main(){

    double a;
    double b;
    scanf("%lf",&a);
    scanf("%lf",&b);
    a *= 3.5;
    b *= 7.5;

    double x = a + b;
    x /= 11;
    printf("MEDIA = %.5lf\n",x);

    return 0;
}