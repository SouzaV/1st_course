#include <stdio.h>

int main()
{
    double x, y;

    printf("Digite dois numeros:\n");
    scanf ("%lf", &x);
    scanf ("%lf", &y);

    while (x != y)
    {
        if (x < y)
        {
            printf("Crescente!\n");
        }
        else
        {
            printf ("Decrescente!\n");
        }

        printf ("Digite outros dois numeros:\n");
        scanf ("%lf", &x);
        scanf ("%lf", &y);
    }

    return 0;
}
