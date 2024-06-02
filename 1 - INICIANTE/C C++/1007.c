#include <stdio.h>

int main(){

    int a;
    int b;
    int c;
    int d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);

    int x = a*b;
    int y = c*d;
    int z = x-y;
    printf("DIFERENCA = %d\n",z);

    return 0;
}