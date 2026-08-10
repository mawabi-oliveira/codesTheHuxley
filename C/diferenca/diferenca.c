#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int difA_B = a*b;
    int difC_D = c*d;

   
    printf("DIFERENCA = %d\n", difA_B - difC_D);

    return 0;
}
