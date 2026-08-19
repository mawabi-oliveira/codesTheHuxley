#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void mostrarEntre(int x, int y) {

    if (x >= y - 1) {
        return; 
    }

    x = x + 1;

    if (x % 5 == 2 || x % 5 == 3) {
        printf("%d\n", x); 
    }

    mostrarEntre(x, y);
}

int main()
{
    int n1, n2;
    int menor, maior;

    scanf("%d %d", &n1, &n2);

    if (n1 < n2)
    {
        menor = n1;
        maior = n2;
    }
    else
    {
        menor = n2;
        maior = n1;
    }

    mostrarEntre(menor, maior);

    return 0;
}