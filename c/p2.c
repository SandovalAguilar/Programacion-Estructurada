// Ismael Sandoval Aguilar 

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n_productos = 0;
    int n_pedidos = 0;
    int n_compras = 0;
    int i = 0;

    printf("Ingrese la longitud del vector A:\n");
    scanf("%d", &n_productos);
    printf("Ingrese la longitud del vector B:\n");
    scanf("%d", &n_pedidos);

    if (n_productos != n_pedidos)
    {
        printf("No se cumple con la igualdad de longitudes; finalizando programa.\n");
        exit(0);
    }

    n_compras = n_productos;

    int A[n_productos];
    int B[n_pedidos];
    int C[n_compras];

    for (i = 0; i < n_productos; i++)
    {
        printf("Ingrese el valor del producto #%d del vector A:\n", i+1);
        scanf("%d", &A[i]);
        while (A[i] <= 0)
        {
            printf("Ingrese un valor mayor a cero:\n");
            scanf("%d", &A[i]);
        }
    }

    for (i = 0; i < n_pedidos; i++)
    {
        printf("Ingrese el valor del producto #%d del vector B:\n", i+1);
        scanf("%d", &B[i]);
        while (B[i] <= 0)
        {
            printf("Ingrese un valor mayor a cero:\n");
            scanf("%d", &B[i]);
        }
    }

    for (i = 0; i < n_compras; i++)
    {
        if (A[i] == B[i])
        {
            C[i] = A[i];
        }
        if (B[i] > A[i])
        {
            C[i] = 2 * (B[i] - A[i]);
        }
        if (A[i] > B[i])
        {
            C[i] = 2 * B[i];
        }
    }

    printf("\nA B C\n");

    for (i = 0; i < n_compras; i++)
    {
        printf("%d %d %d\n", A[i], B[i], C[i]);
    }
    
    return 0;
}