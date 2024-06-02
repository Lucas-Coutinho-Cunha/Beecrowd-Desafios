#include <stdio.h>

int main(){

    double pi = 3.14159;
    double a;
    scanf("%lf",&a);

    a *= a;
    double res = a*pi;
    printf("A=%.4f\n",res);

    return 0;
}