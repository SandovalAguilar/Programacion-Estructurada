// Ismael Sandoval Aguilar

#include <stdio.h>

int main ()
{
    float toneladas_mensuales[12];
    float promedio_anual = 0;
    float mayor_produccion = 0;
    
    char meses_nombres[12][30] =
    {
        "Enero",
        "Febrero",
        "Marzo",
        "Abril",
        "Mayo",
        "Junio",
        "Julio",
        "Agosto",
        "Septiembre",
        "Octubre",
        "Noviembre",
        "Diciembre"
    };

    int meses_superiores = 0;
    int meses = 0;
    int mes_productivo = 0;

    for (meses = 0; meses < 12; meses++)
    {
        printf("Ingresar las toneladas de cereal del mes de %s:\n", meses_nombres[meses]);
        scanf("%f", &toneladas_mensuales[meses]);

        promedio_anual += toneladas_mensuales[meses];
    }

    promedio_anual = promedio_anual / 12; 

    for (meses = 0; meses < 12; meses++)
    {
        if (toneladas_mensuales[meses] > promedio_anual)
        {
            meses_superiores++;
        }
        
        if (toneladas_mensuales[meses] > mayor_produccion)
        {
            mayor_produccion = toneladas_mensuales[meses];
        }
    }

    for (meses = 0; meses < 12; meses++)
    {
        if (mayor_produccion == toneladas_mensuales[meses])
        {
            mes_productivo = meses;
        }
    }
    
    printf("\nPromedio anual de toneladas cosechadas: %0.2f\n", promedio_anual);
    printf("Numero de meses con una cosecha superior al promedio: %d\n", meses_superiores);
    printf("Mayor produccion mensual: %0.2f\n", mayor_produccion);
    printf("Mes mas productivo: %s\n", meses_nombres[mes_productivo]);

    return 0;
}