#include <stdio.h>

int main(){
        
    int it1, it2, amt1, amt2;
    float p1, p2;
    float r1, r2;
    
    scanf("%d %d %f", &it1, &amt1, &p1);
    scanf("%d %d %f", &it2, &amt2, &p2);

    float r = (amt1 * p1) + (amt2 * p2);
    
    printf("VALOR A PAGAR: R$ %.2f\n", r);

    return 0;
}