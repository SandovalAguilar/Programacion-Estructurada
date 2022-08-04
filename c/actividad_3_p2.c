// Ismael Sandoval Aguilar

#include <stdio.h>

int main()
{
    int n = 0, ultimo_digito = 0, penultimo_digito = 0;

    printf("Ingresar un número entero: \n");
    scanf("%d", &n);

    ultimo_digito = n % 10;
    penultimo_digito = (n / 10) % 10;

    printf("%d, %d \n", ultimo_digito, penultimo_digito);

    return 0;
}