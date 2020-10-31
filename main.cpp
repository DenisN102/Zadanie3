#include "conio.h"
#include "stdlib.h"
#include "string.h"


#include <stdio.h>
int main (void)
{
    float a = 5, b;
    int c = 5, d;

    printf("float b = ");
    scanf("%f", &b);
    printf("int d = ");
    scanf("%d", &d);
    printf("a = %f, b = %f, c = %d, d = %d\n", a, b, c, d);

    a += b - 2;
    printf("a = %f, b = %f, c = %d, d = %d\n", a, b, c, d);

    d += ++c - a;

    printf("a = %f, b = %f, c = %d, d = %d\n", a, b, c, d);


    a *= c--;
    printf("a = %f, b = %f, c = %d, d = %d\n", a, b, c, d);
    a /= 10;
    c /= 2;
    d *= c + --b + a;
    printf("a = %f, b = %f, c = %d, d = %d\n", a, b, c, d);

    getch();
    return 0;
}
