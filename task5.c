#include <stdio.h>

int main()
{
    int i;
    unsigned int u;
    float f;
    double d;
    char c;
    long int l;

    printf("Enter an integer: ");
    scanf("%d", &i);

    printf("Enter an unsigned integer: ");
    scanf("%u", &u);

    printf("Enter a float value: ");
    scanf("%f", &f);

    printf("Enter a double value: ");
    scanf("%lf", &d);

    printf("Enter a character: ");
    scanf(" %c", &c);

    printf("Enter a long integer: ");
    scanf("%ld", &l);

    printf("\n========================================\n");
    printf("INTEGER FORMATS\n");
    printf("========================================\n");
    printf("Decimal\t\t: %d\n", i);
    printf("Octal\t\t: %o\n", i);
    printf("Hex (lower)\t: %x\n", i);
    printf("Hex (upper)\t: %X\n", i);

    printf("\n========================================\n");
    printf("FLOATING-POINT FORMATS\n");
    printf("========================================\n");
    printf("Float  (%%f)\t: %f\n", f);
    printf("Float  (%%e)\t: %e\n", f);
    printf("Float  (%%g)\t: %g\n", f);
    printf("Double (%%f)\t: %f\n", d);
    printf("Double (%%e)\t: %e\n", d);
    printf("Double (%%g)\t: %g\n", d);

    return 0;
}