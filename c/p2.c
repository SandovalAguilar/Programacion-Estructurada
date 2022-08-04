#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int i,n;
	
	char clM['n'][10],clB['n'][10],clD['n'][10];
	char mat['n'][30];
	
	float promM,promB,promD,promA[n],cmasM=0,cmasB=0,cmasD=0;
	float califM['n'],califB['n'],califD['n'];
	float *M['n'],*B['n'],*D['n'];
	float sumaM=0,sumaB=0,sumaD=0;
    
	printf("Ingrese la cantidad de alumnos a capturar: ");
    scanf("%d",&n);
    
	if(n == 0)
	{
        printf("Lo siento, no se puede proceder el registro.");
        return 0;
    }
	
	for(i=0;i<n;i++)
	{
		printf("\nIngrese la matricula %d:\n",i+1);
        scanf("%s",mat[i]);
		
		do
		{
            printf("Ingrese la clave de la materia Matematicas:\n");
            scanf("%s",&clM[i]);
		}while(strcmp(clM[i],"1001")!=0);
		
		printf("Ingrese la calificacion de la materia Matematicas:\n");
		
		scanf("%f",&califM[i]);
		
		do
		{
            printf("Ingrese la clave de la materia Biologia:\n");
            scanf("%s",&clB[i]);
		}while(strcmp(clB[i],"1002")!=0);
		
		printf("Ingrese la calificacion de la materia Biologia:\n");
		scanf("%f",&califB[i]);
		
		do
		{
            printf("Ingrese la clave de la materia Dibujo:\n");
            scanf("%s",&clD[i]);
		}while(strcmp(clD[i],"1003")!=0);
		
		printf("Ingrese la calificacion de la materia Dibujo:\n");
		scanf("%f",&califD[i]);
		printf("\n");
		
		M[i] = &califM[i];
		B[i] = &califB[i];
		D[i] = &califD[i];
		
		if(*M[i]>cmasM)
		{
			cmasM = *M[i];
		}
		
		if(*B[i]>cmasB)
		{
			cmasB = *B[i];
		}
		
		if(*D[i]>cmasD)
		{
			cmasD = *D[i];
		}
		
		if(strcmp(clM[i],"1001")==0)
		{
			sumaM = sumaM + *M[i];
		}
		
		if(strcmp(clB[i],"1002")==0)
		{
			sumaB = sumaB + *B[i];
		}
		
		if(strcmp(clD[i],"1003")==0)
		{
			sumaD = sumaD + *D[i];
		}
		
		promA[i] = (*M[i] + *B[i] + *D[i])/3;
		promM = sumaM/n;
	    promB = sumaB/n;
	    promD = sumaD/n;
	}
	
	printf("\n");
	printf("El promedio del alumno con la matricula %s es de %.2f\n",mat[0],promA[0]);
	printf("\nPromedio general de Matematicas [%s]: %.2f\n",*clM, promM);
    printf("Promedio ggneral de Biologia [%s]: %.2f\n",*clB, promB);
    printf("Promedio general de Dibujo [%s]: %.2f \n",*clD, promD);
	printf("\nLa calificacion mas alta de Matematicas [%s] es: %.2f\n",*clM, cmasM);
    printf("La calificacion mas alta de Biologia [%s] es: %.2f\n",*clB, cmasB);
    printf("La calificacion mas alta de Dibujo [%s] es: %.2f\n",*clD, cmasD);
	
	return 0;
}
