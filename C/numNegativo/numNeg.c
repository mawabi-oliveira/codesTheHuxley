#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float n;
    int contador = 0;
    for(int i = 0; i < 5; i++)
    {
         printf("Digite um valor:\n");
         scanf("%f", &n);
         if(n < 0)  
         {
            contador++;
         }
    } 
printf("Foram digitados %d numeros negativos\n", contador);
	return 0;
}