#include <stdio.h>

int main ()
{
    int sec;
    scanf("%d", &sec);

    int min = sec / 60;
    sec = sec % 60;

    int hrs = min / 60;
    min = min % 60;

    printf("%d:%d:%d\n", hrs, min, sec);

    return 0;
}