#include <stdio.h>
int main()
{
    int c;
    int d;
    printf("Ingresa el valor de c: ");
    scanf_s("%i", &c);
    printf("Ingresa el valor de d: ");
    scanf_s("%i", &d);

    if (c == d) {
        printf("Ambos valores son iguales.\n");
    }
    else {
        if (c > d) {
            printf("C es mayor que D.\n");
        }
        else {
            printf("D es mayor que C.\n");
        }
    }

    return 0;
}
