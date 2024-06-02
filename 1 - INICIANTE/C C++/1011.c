#include <stdio.h>

int main(){
        
    double i, o1, o2, o3;
    scanf("%lf", &i);
    
    o1 = (i*i*i);
    o2 = o1*3.14159;
    o3 = o2 * (4.0/3.0);
    
    printf("VOLUME = %.3lf\n", o3);

    return 0;
}