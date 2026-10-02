#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float pH;
    printf("Digite o pH da solucao:\n");
    scanf("%f", &pH);

    if(pH < 0){
        printf("Valor do pH deve estar entre 0 e 14\n");
        return 0;
    }
    if (pH > 0 && pH < 7) {
        printf("Solucao acida\n");
    }  
    
    if (pH == 7) {
        printf("Solucao neutra\n");
    } 
    
    if (pH > 7 && pH <= 14) {
        printf("Solucao basica\n");
    }

    return 0;
}
