#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int h1, m1, h2, m2;
  
    while(1)
    {
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
        if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)
        {
            break;
        }
        
        int inicio = (h1 * 60) + m1;
        int fim = (h2 * 60) + m2;

        int resultado = fim - inicio;
        if(fim <= inicio)
        {
            resultado = (fim + 1440) - inicio;
        }


        printf("%d\n", resultado);
    }
 
    return 0;
}