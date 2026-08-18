#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ContaDigitosPares(int numero)
{       
    if(numero == 0)
    {
        return 0;
    }

    int digito = numero % 10;

    if(digito % 2 == 0)
    {
        return 1 + ContaDigitosPares(numero/10);
    }
    else
    {
        return 0 + ContaDigitosPares(numero/10);
    } 
}

int main()
{
    int num;
    scanf("%d", &num);
    int resultado = ContaDigitosPares(num);

    printf("%d", resultado);

    return 0;
}