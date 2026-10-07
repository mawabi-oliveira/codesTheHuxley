#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int descobrirMaior(int n[], int tam)
{
    if (tam == 1)
    {
        return n[0];
    }

    int maiorDoResto = descobrirMaior(n + 1, tam - 1);

    if (n[0] > maiorDoResto)
    {
        return n[0];
    }
    else
    {
        return maiorDoResto;
    }
}

int descobrirMenor(int n[], int tam)
{
    if (tam == 1)
    {
        return n[0];
    }

    int menorDoResto = descobrirMenor(n + 1, tam - 1);

    if (n[0] < menorDoResto)
    {
        return n[0];
    }
    else
    {
        return menorDoResto;
    }
}

void imprimirMaiorMenor(int n[], int tam)
{
    int maior = descobrirMaior(n, tam);
    int menor = descobrirMenor(n, tam);

    printf("%d\n", menor);
    printf("%d\n", maior);
}

int main()
{
    int numeros[6];
    
    scanf("%d %d %d %d %d %d", &numeros[0], &numeros[1], &numeros[2], &numeros[3], &numeros[4], &numeros[5]);

    imprimirMaiorMenor(numeros, 6);

    return 0;
}