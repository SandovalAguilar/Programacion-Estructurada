// Ismael Sandoval Aguilar

#include <stdio.h>

int main()
{
    int total_votos = 0, i, aux = 0, porcentajes[] = {40, 30, 15, 10, 5};
    char nombres[5][40] = {"PAN", "PRI", "PT", "INDEPENDIENTE", "OTROS"};

    printf("Introduzca el total de votos:\n");
    scanf("%d", &total_votos);

    for(i = 0; i < 5; i++)
    {
        aux = (total_votos * porcentajes[i]) / 100;
        printf("El total de votos del partido %s es: %d \n", nombres[i], aux);
        aux = 0;
    }

    return 0;
}