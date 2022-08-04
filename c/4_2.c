#include <stdio.h>
#include <stdlib.h>

int comparaArchivos(FILE * fPtr1, FILE * fPtr2, int * linea, int * col);

int main()
{
    FILE * fPtr1; 
    FILE * fPtr2;

    int dif;
    int linea, col;


    fPtr1 = fopen("archivo1.txt", "r");
    fPtr2 = fopen("archivo2.txt", "r");


    if (fPtr1 == NULL || fPtr2 == NULL)
    {
        printf("\nNo se han podido leer los archivos.\n");
        exit(EXIT_FAILURE);
    }

    dif = comparaArchivos(fPtr1, fPtr2, &linea, &col);

    if (dif == 0)
    {
        printf("\nAmbos archivos son iguales.");
    }
    else 
    {
        printf("\nLos archivos no son iguales.\n");
        printf("linea: %d, col: %d\n", linea, col);
    }


    /* Finally close files to release resources */
    fclose(fPtr1);
    fclose(fPtr2);

    return 0;
}


int comparaArchivos(FILE * fPtr1, FILE * fPtr2, int * linea, int * col)
{
    char ch1, ch2;

    *linea = 1;
    *col  = 0;

    do
    {
        ch1 = fgetc(fPtr1);
        ch2 = fgetc(fPtr2);
        
        if (ch1 == '\n')
        {
            *linea += 1;
            *col = 0;
        }

        if (ch1 != ch2)
            return -1;

        *col  += 1;

    } while (ch1 != EOF && ch2 != EOF);

    if (ch1 == EOF && ch2 == EOF)
        return 0;
    else
        return -1;
}