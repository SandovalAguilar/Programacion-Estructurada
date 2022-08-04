#include<stdio.h>

int main()
{
    int matricula;
    int numal;
    int i;
    int cred;
    int edad;

    int *pm;
    int *pna;
    int *pcr;
    int *pe;

    pcr = &cred;
    pna = &numal;
    pe = &edad;
    pm = &matricula;

    printf("Introduzca el numero de alumnos a inscribirse:\n");
    scanf("%d",&(*pna));

    for(i=0;i<numal;i++)
    {
        float pag1=0,pag2=0,pag3=0,pag=0;
        float desc;
        float *pp1=&pag1;
        float *pp2=&pag2;
        float *pp3=&pag3;
        float *pp=&pag;
        float *pde=&desc;

        printf("\n\nMatricula del alumno %d:\n",i+1);
        scanf("%d",&(*pm));
        printf("\nIntroduzca la edad:\n");
        scanf("%d",&(*pe));
        printf("\nIntroduzca el total de creditos a inscribir del alumno %d con matricula: %d\n",i+1,*(pm));
        scanf("%d",&(*pcr));

        if(cred > 0 && cred < 21)
        {
            pag1=*(pcr) * 150;
        }

        if(cred > 0 && cred < 36)
        {
            pag1=20*150;
            pag2=(*(pcr) - 20) * 250;
        }

        if(cred >= 36)
        {
            pag1=20*150;
            pag2=15*250;
            pag3=(*(pcr) - 35) * 350;
        }

        if(edad < 20)
        {
            desc=(*(pp2) * 10) / 100;
            pag2= *(pp2) - *(pde);
        }

        if(edad > 40)
        {
            desc=(*(pp3) * 5) / 100;
            pag3= *(pp3) - *(pde);
        }

        if(edad > 20 && edad < 40)
        {
            desc=(*(pp1) * 20) / 100;
            pag1= *(pp1) - *(pde);
        }

        pag=*(pp1) + *(pp2) + *(pp3);
        printf("\n\nPago total del alumno %d con matricula %d: %.2f\n",i+1,*(pm),*(pp));
    }

    return 0;
}
