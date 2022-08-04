// Ismael Sandoval Aguilar

#include <stdio.h>

float calcula_porcentaje(int minutos_transcurridos)
{
    float porcentaje_avance = 0;
    porcentaje_avance = (100 * (float)minutos_transcurridos) / 120;

    return porcentaje_avance;
}

int main()
{
    int minutos_transcurridos = 0;
    float porcentaje_avance = 0;
    
    printf("Ingresar los minutos transcurridos de vuelo:\n");
    scanf("%d", &minutos_transcurridos);

    porcentaje_avance = calcula_porcentaje(minutos_transcurridos);

    printf("El porcentaje de avance es de: %0.2f", porcentaje_avance);

    return 0 ;
}