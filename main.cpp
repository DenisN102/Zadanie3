//Просто расчеты

#include <stdio.h>
int main (void)
{
    float a = 5, b;
    int c = 5, d;

    printf("Vvedite b = ");
    scanf("%f", &b);
    printf( "\n" );
    printf("Vvedite d = ");
    scanf("%d", &d);
    printf("a = %f, b = %f, c = %d, d = %d\n", a, b, c, d);
    printf( "\n" );

    a += b - 2;
    printf("a += b - 2\n");
    printf("a = %f, b = %f, c = %d, d = %d\n", a, b, c, d);
    printf( "\n" );

    d += ++c - a;
    printf("d += ++c - a\n");

    printf("a = %f, b = %f, c = %d, d = %d\n", a, b, c, d);
    printf( "\n" );

    a *= c--;
    printf("a *= c-- \n");

    printf("a = %f, b = %f, c = %d, d = %d\n", a, b, c, d);
    printf( "\n" );

    a /= 10;
    c /= 2;
    d *= c + --b + a;
    printf("d *= c + --b + a\n");
    printf("a = %f, b = %f, c = %d, d = %d\n", a, b, c, d);
    printf( "\n" );

    return 0;
}
