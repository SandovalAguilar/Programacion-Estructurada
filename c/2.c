// Ismael Sandoval Aguilar

#include <stdio.h>
#include <ctype.h>
#include <string.h>

// toupper(cadena[indice])
// tolower(cadena[indice])

int main ()
{
    char cadena_entrada[50];
    char cadena_resultante[50];
    int i = 0;

    printf("Ingrese una cadena no mayor a 50 caracteres:\n");
    gets(cadena_entrada);

    for (i = 0; i < 50; i++)
    {
        cadena_resultante[i] = cadena_entrada[i];
    }
    
    for (i = 0; i < 50; i++)
    {
        if (i+1 == strlen(cadena_entrada))
        {
            cadena_resultante[i] = toupper(cadena_entrada[i]);
        }
        if (i == 0)
        {
            cadena_resultante[i] = toupper(cadena_entrada[i]);
        }
        if (cadena_entrada[i] == tolower(cadena_entrada[i]) && cadena_entrada[i-1] == ' ')
        {
            cadena_resultante[i] = toupper(cadena_entrada[i]);
        }
        if (cadena_entrada[i] == tolower(cadena_entrada[i]) && cadena_entrada[i+1] == ' ')
        {
            cadena_resultante[i] = toupper(cadena_entrada[i]);
        }  
    }

    printf("Cadena de entrada: %s\n", cadena_entrada);
    printf("Cadena resultante: %s\n", cadena_resultante);

    return 0;
}