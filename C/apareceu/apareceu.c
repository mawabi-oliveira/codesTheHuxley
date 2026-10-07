#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int contarApareceu(int n[], int tam, int x)
{

    if (tam == 0)
    {
        return 0;
    }

    int contagemDoResto = contarApareceu(n + 1, tam - 1, x);

    if (n[0] == x)
    {
        return 1 + contagemDoResto;
    }
    else
    {
        return contagemDoResto;
    }
}

void lerNumeros(int n[], int tam)
{
    if (tam == 0)
        return;
    scanf("%d", &n[0]);
    lerNumeros(n + 1, tam - 1);
}

int main()
{
    int numeros[10];
    int x;

    lerNumeros(numeros, 10);

    scanf("%d", &x);

    int resultado = contarApareceu(numeros, 10, x);

    printf("%d\n", resultado);

    return 0;
}
