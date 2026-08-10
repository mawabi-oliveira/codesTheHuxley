/* Ler numero N, rodar um loop de 1 a 1000, dentro do loop, 
ler um numero inteiro, se o numero lido for igual a N, somar 1 no contador, 
ler o proximo numero N para reiniciar o processo */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int N;
    int numero_atual;
    int contador;

   
    while (1) {
       
        if (scanf("%d", &N) != 1) {
            break;
        }

     
        if (N == -1) {
            break;
        }

       
        contador = 0;

        for (int i = 0; i < 5; i++) {
            if (scanf("%d", &numero_atual) == 1) {
                if (numero_atual == N) {
                    contador++;
                }
            }
        }

        
        printf("%d appeared %d times\n", N, contador);
    }

    return 0;
}
