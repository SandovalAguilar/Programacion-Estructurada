// Ismael Sandoval Aguilar

#include <stdio.h>
#include <ctype.h>
#include <string.h>

// toupper(cadena[indice])
// tolower(cadena[indice])

int main ()
{
    int n = 0;
    int contador_aux = 0;
    int i = 0;
    int j = 0;
    int mayor = 0;
    int i_mayor = 0;

    printf("Ingresar el numero de cadenas a leer:\n");
    scanf("%d", &n);
    getchar();

    char cadenas[n][30];

    for (i = 0; i < n; i++)
    {
        printf("Ingresar la cadena #%d:\n", i+1);
        gets(cadenas[i]);
    }
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; cadenas[i][j] != '\0'; j++)
        {
            if (cadenas[i][j] == ' ' && cadenas[i][j+1] != ' ')
            {
                if (cadenas[i][j] == ' ' && cadenas[i][j+1] != ' ')
                contador_aux++;    
            } 
        }   
        if (contador_aux > mayor)
        {
            mayor = contador_aux;
            i_mayor = i;
        }
        contador_aux = 0;
    }
    
    printf("Cadena con mas palabras:\n");
    printf("%s\n", cadenas[i_mayor]);
    printf("Numero de palabras de la cadena: %d\n", mayor+1);

    return 0;
}