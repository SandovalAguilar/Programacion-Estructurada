// Ismael Sandoval Aguiar
// Practica 10

#include <stdio.h>
#include <stdlib.h>

struct servicio
{
    int codigo_taxi;
    int clave_cliente;
    int tipo_servicio;
    int costo_servicio;
}datos[100];

void entrada_datos();
void imprimir_datos();
void calcular_totales();
void servicio_mayor();
void pago_mayor();
void regresar_menu();

int n = 0;

int main ()
{
    int i;
    int OP;

    printf("\n[Programa que registra los servicios de cada taxi]\n\n");

    do
    {
        printf("Menu:\n\t 1. Introducir datos\n\t 2. Mostrar datos\n\t 3. Calcular total de cada taxi\n\t 4. Mostrar el servicio mas usado\n\t 5. Cliente que pago mas\n\t 6. Salir\n\n");
        printf("Favor de introducir una opcion valida:\n");
        scanf("%d", &OP);
    }
    while ((OP < 1) || (OP > 6));

    switch (OP)
    {
        case 1:
        {
            entrada_datos();
            break;
        }
        case 2:
        {
            imprimir_datos();
            break;
        }
        case 3:
        {
            calcular_totales();
            break;
        }
        case 4:
        {
            servicio_mayor();
            break;
        }
        case 5:
        {
            pago_mayor();
            break;
        }
        case 6:
        {
            return 0;
        }
    }

    return 0;
}

void regresar_menu()
{
    char opcion;

    getchar();
    do
    {
        printf("\n[Presione 'm' para regresar al menu]\n");
        scanf("%c", &opcion);
    } while (opcion != 'm');

    system("cls");
    main();
}

void entrada_datos()
{
    int i = 0;
    int j = 0;

    printf("\nCodigo taxi\tTipo de servicio\n");
    printf("01\t\t\t01\n02\t\t\t02\n03\t\t\t03\n04\n05\n");

    printf("\nIngresar el numero de datos a leer:\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Ingresar el codigo del taxi #%d:\n", i+1);
        scanf("%d", &datos[i].codigo_taxi);

        printf("Ingresar la clave del cliente #%d:\n", i+1);
        scanf("%d", &datos[i].clave_cliente);

        printf("Ingresar el tipo de servicio #%d:\n", i+1);
        scanf("%d", &datos[i].tipo_servicio);

        printf("Ingresar el costo del servicio #%d:\n", i+1);
        scanf("%d", &datos[i].costo_servicio);
    }

    regresar_menu();
}

void imprimir_datos()
{
    int i = 0;

    printf("\nBase de datos:\n");
    printf("\nCODIGO TAXI \tCLAVE CLIENTE \tTIPO SERVICIO \tCOSTO SERVICIO\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t\t %d\t\t %d\t\t %d\n", i+1, datos[i].codigo_taxi, datos[i].clave_cliente, datos[i].tipo_servicio, datos[i].tipo_servicio);
    }

    regresar_menu();
}

void calcular_totales()
{
    int i = 0;
    int totales[5] = {0, 0, 0, 0, 0};

    for (i = 0; i < n; i++)
    {
        if (datos[i].codigo_taxi == 1)
        {
            totales[0] = totales[0] + datos[i].costo_servicio;
        }
        if (datos[i].codigo_taxi == 2)
        {
            totales[1] = totales[1] + datos[i].costo_servicio;
        }
        if (datos[i].codigo_taxi == 3)
        {
            totales[2] = totales[2] + datos[i].costo_servicio;
        }
        if (datos[i].codigo_taxi == 4)
        {
            totales[3] = totales[3] + datos[i].costo_servicio;
        }
        if (datos[i].codigo_taxi == 5)
        {
            totales[4] = totales[4] + datos[i].costo_servicio;
        }
    }

    printf("\nDinero total por taxi por codigo:\n");
    printf("\n01 \t 02 \t 03 \t 04 \t 05\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d \t ", totales[i]);
    }

    regresar_menu();
}

void servicio_mayor()
{
    int i = 0;
    int frecuencia_mayor = 0;
    int servicio_frecuencias[3] = {0,0,0};
    int indice_mayor = 0;

    for (i = 0; i < n; i++)
    {
        if (datos[i].tipo_servicio == 1)
        {
            servicio_frecuencias[0]++;
        }
        if (datos[i].tipo_servicio == 2)
        {
            servicio_frecuencias[1]++;
        }
        if (datos[i].tipo_servicio == 3)
        {
            servicio_frecuencias[2]++;
        }
    }

    for (i = 0; i < 3; i++)
    {
        if(servicio_frecuencias[i] > frecuencia_mayor)
        {
            frecuencia_mayor = servicio_frecuencias[i];
            indice_mayor = i;
        }
    }

    switch (indice_mayor)
    {
        case 0:
        {
            printf("\n01 Puerta a puerta se uso %d veces.\n", frecuencia_mayor);
            break;
        }
        case 1:
        {
            printf("\n02 Normal se uso %d veces.\n", frecuencia_mayor);
            break;
        }
        case 2:
        {
            printf("\n03 Especial se uso %d veces.\n", frecuencia_mayor);
            break;
        }
    }

    regresar_menu();
}

void pago_mayor()
{
    int i = 0;
    int pago_mayor = 0;
    int indice_mayor = 0;

    for (i = 0; i < n; i++)
    {
        if (datos[i].costo_servicio > pago_mayor)
        {
            pago_mayor = datos[i].costo_servicio;
            indice_mayor = i;
        }
    }

    printf("\nCliente que pago mas: clave %d - %d$\n", datos[indice_mayor].clave_cliente, pago_mayor);

    regresar_menu();
}
