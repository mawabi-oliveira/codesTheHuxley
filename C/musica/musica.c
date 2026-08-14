#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int e_primario, e_secundario;
    double f_musical;
    scanf("%d %d", &e_primario, &e_secundario);
    scanf("%lf", &f_musical);

    if (e_primario == 1 && e_secundario == 1)
    {
        printf("Aumenta mais!\n");
    }
    
    if(e_primario == 1 && e_secundario == 2)
    {
        printf("Legal\n");
    }

    if (e_primario == 2 && e_secundario == 1)
    {
        printf("Essa eh punk\n");
    }
    
    if (e_primario == 2 && e_secundario == 2)
    {
        printf("Hoje eu choro\n");
    }
    
    if (e_primario == 3 && e_secundario == 1)
    {
        printf("Aumenta mais!\n");
    }

    if (e_primario == 3 && e_secundario == 2)
    {
        printf("Legal\n");
    }


    if (f_musical >= 1 && f_musical <= 4)
    {
        printf(":'(\n");
    }
    if (f_musical > 4 && f_musical <= 7)
    {
        printf("^_^\n");
    }
    
    if (f_musical > 7 && f_musical <= 10)
    {
        printf("=D\n");
    }

    return 0;
}