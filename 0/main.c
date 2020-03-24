#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Hombres=0;
    int Mujeres=0;
    int Total=0;
    int PorcH=0;
    int PorcM=0;

    printf("Introduzca la cantidad de hombres: ");
    scanf("%d", &Hombres);
    printf("Introduzca la cantidad de mujeres: ");
    scanf("%d", &Mujeres);

    Total=Hombres+Mujeres;
    PorcH=(Hombres*100)/Total;
    PorcM=(Mujeres*100)/Total;

    printf("El porcentaje total de Hombres es: %d", PorcH);
    printf("El porcentaje total de Mujeres es: %d", PorcM);

    printf("Hello world!\n");
    return 0;
}
