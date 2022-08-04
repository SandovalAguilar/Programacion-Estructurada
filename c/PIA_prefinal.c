#include <stdio.h>
#include <math.h>
#include<string.h>
// Libreria para limpiar la terminal
#include <stdlib.h>
#include<ctype.h>

/*
Inventario:
1. Alta (agregar producto)
2. Baja (eliminar producto)
3. Actualizaciones (cambiar datos de algun producto)
4. Reportes (Imprimir inventario)
5. Salir
*/

// Conjunto de datos

struct inventario
{
    int registro;
    char nombre_herramienta[20];
    int cantidad;
    float costo;
}datos[30];

// Funciones prototipo

int despliega_menu();
void agregar_producto();
void eliminar_producto();
void actualizar_producto();
void regresar_menu();
void imprimir_pantalla();
void generar_archivo();
void verificar_registro();
int validacion_cadena(char cadena[]);

// Programa principal

int main()
{
    despliega_menu();

    return 0;
}

// Formato

const char* CABECERA = "REGISTRO, NOMBRE, CANTIDAD, COSTO\n";
const char* FORMATO_SALIDA = "%d, %s, %d, %0.2f\n";

// Variable global

int n = 0;

// Funciones

int despliega_menu()
{
    int opcion;

    do
    {
        // Texto del menu
        printf("\n\t\t\tTienda Kesos y kosas\n");
        printf("\t\t\t--------------------\n");
        printf("\n\tMenu de Opciones\n\n");
        printf("\t1. Alta (agregar producto)\n");
        printf("\t2. Baja (eliminar producto)\n");
        printf("\t3. Actualizaciones (cambiar datos de algun producto)\n");
        printf("\t4. Generar reporte en pantalla\n");
        printf("\t5. Generar reporte en archivo\n");
        printf("\t6. Salir del programa\n");

        printf("\n\tIngrese una opcion valida: ");
        fflush(stdin);
        scanf("%d", &opcion);

        switch (opcion)
        {
            case 1:
            {
                agregar_producto();
                break;
            }
            case 2:
            {
                eliminar_producto();
                break;
            }
            case 3:
            {
                actualizar_producto();
                break;
            }
			case 4:
			{
                imprimir_pantalla();
                break;
            }
            case 5:
            {
                generar_archivo();
                break;
            }
            case 6:
            {
                break;
            }
            default:
            {
                verificar_registro();
                regresar_menu();
                opcion = 1;
                break;
            }
        }
    }
    while ((opcion > 0) && (opcion < 6));

    return 0;
}

void agregar_producto()
{
    int i = 1;
    printf("\nRegistro #\tNombre de la herramienta\tCantidad\tCosto\n");

    do
    {
        printf("\nIngresar el numero de datos a leer:\n");
        scanf("%d", &n);
        if (n <= 0)
            verificar_registro();
    }
    while (n <= 0);

    for (i = 1; i < n+1; i++)
    {
        do
        {
            printf("Ingresar el numero de registro #%d:\n", i);
            scanf("%d", &datos[i].registro);
            if ((datos[i].registro < 1000) || (datos[i].registro>9999))
                verificar_registro();
        }
        while ((datos[i].registro < 1000) || (datos[i].registro>9999));

        do
        {
            printf("Ingresar el nombre de la herramienta #%d:\n", i);
            scanf("%s", &datos[i].nombre_herramienta);
            if(!validacion_cadena(datos[i].nombre_herramienta))
                verificar_registro();
        }
        while (!validacion_cadena(datos[i].nombre_herramienta));

        do
        {
            printf("Cantidad #%d:\n", i);
            scanf("%d", &datos[i].cantidad);
            if (datos[i].cantidad <= 0)
                verificar_registro();
        }
        while (datos[i].cantidad <= 0);

        do
        {
            printf("Ingresar el costo del producto #%d:\n", i);
            scanf("%f", &datos[i].costo);
            if (datos[i].costo <= 0)
                verificar_registro();
        }
        while (datos[i].costo <= 0);
    }

    regresar_menu();
}

void eliminar_producto()
{
    int registro_temporal;
    int i, j = 0;

    printf("\t\t\t--------------------\n");
    printf("Eliminar un producto. Ingresar el numero de registro a eliminar: ");

    do
    {
        scanf("%d", &registro_temporal);
        if ((registro_temporal < 1000) || (registro_temporal > 9999))
            verificar_registro();
    }
    while ((registro_temporal < 1000) || (registro_temporal > 9999));

    for (i = 0; i < n+1; i++)
    {
        if (registro_temporal == datos[i].registro)
        {
            if (datos[i + 1].registro != 0)
            {
                datos[i].registro = datos[i + 1].registro;
                datos[i + 1].registro = 0;
                strcpy(datos[i].nombre_herramienta, datos[i + 1].nombre_herramienta);
                strcpy(datos[i + 1].nombre_herramienta, "");
                datos[i].cantidad = datos[i + 1].cantidad;
                datos[i + 1].cantidad = 0;
                datos[i].costo = datos[i + 1].costo;
                datos[i + 1].costo = 0;
                printf("\nEl registro se elimino correctamente.\n");
                j = 1;
            }
            else
            {
                datos[i].registro = 0;
                strcpy(datos[i].nombre_herramienta, "");
                datos[i].cantidad = 0;
                datos[i].costo = 0;
                printf("\nEl registro se elimino correctamente.\n");
                j = 1;
            }
        }
    }

    if (j != 1)
    {
        printf("\nEl registro ingresado no se encontro.\n");
    }

    regresar_menu();
}

void actualizar_producto()
{
    int registro_temporal;
    int i;
    int j = 0;

    printf("\t\t\t--------------------\n");
    printf("Actualizar datos de un producto.");
    printf(" Ingresar el numero de registro a actualizar: ");

    do
    {
        scanf("%d", &registro_temporal);
        if ((registro_temporal < 1000) || (registro_temporal > 9999))
            verificar_registro();
    }
    while ((registro_temporal < 1000) || (registro_temporal > 9999));

    for (i = 0; i < n+1; i++)
    {
        if (registro_temporal == datos[i].registro)
        {
            do
            {
                printf("Ingresar el nuevo nombre:\n");
                scanf("%s", &datos[i].nombre_herramienta);
                if(!validacion_cadena(datos[i].nombre_herramienta))
                    verificar_registro();
            }
            while (!validacion_cadena(datos[i].nombre_herramienta));

            do
            {
                printf("Ingresar la nueva cantidad:\n");
                scanf("%d", &datos[i].cantidad);
                if (datos[i].cantidad <= 0)
                    verificar_registro();
            }
            while (datos[i].cantidad <= 0);

            do
            {
                printf("Ingresar el nuevo costo:\n");
                scanf("%f", &datos[i].costo);
                if (datos[i].costo <= 0)
                    verificar_registro();
            }
            while (datos[i].costo <= 0);

            j = 1;
        }
    }
    if (j != 1)
    {
        printf("\nEl registro ingresado no se encontro.\n");
    }

    regresar_menu();
}

void imprimir_pantalla()
{
    int i = 1;

    printf("\nInventario:\n");
    printf("REGISTRO-#         NOMBRE     CANTIDAD     COSTO\n");

    while (datos[i].registro != 0)
    {
        printf("%10d%15s%13d%10.2f\n", datos[i].registro, datos[i].nombre_herramienta, datos[i].cantidad, datos[i].costo);
        i++;
    }

    regresar_menu();
}

void generar_archivo()
{
    int i = 1;

    FILE *archivo;
    archivo = fopen("inventario.csv", "w+");

    if (archivo == NULL)
    {
        printf("No fue posible abrir el archivo.\n");
    }
    else
    {
        fprintf(archivo, CABECERA);
        while (datos[i].registro != 0)
        {
            fprintf(archivo, FORMATO_SALIDA, datos[i].registro, datos[i].nombre_herramienta, datos[i].cantidad, datos[i].costo);
            i++;
        }
    }

    printf("\nArchivo generado exitosamente.\n");

    fclose(archivo);

    regresar_menu();
}

void regresar_menu()
{
    char opcion;

    getchar();

    do
    {
        printf("\n[Presione 'm' para regresar al menu]\n");
        fflush(stdin);
        scanf("%c", &opcion);
    } while (opcion != 'm');

    system("cls");
}

void verificar_registro()
{
    printf("\nEl dato ingresado no es correcto.\nReviselo e ingrese otra vez.\n");
}

int validacion_cadena(char cadena[])
{
    int j = 0;
    while (cadena[j])
    {
        if (!isalpha(cadena[j]) && cadena[j] != ' ')
            return 0;
        j++;
    }
    return 1;
}