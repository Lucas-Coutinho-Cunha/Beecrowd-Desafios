#include <stdio.h>

int main ()
{
    int t, vm;
    scanf("%d %d", &t, &vm);

    float consumption = (t*vm) / 12.0;
    printf("%.3f\n", consumption);

    return 0;
}