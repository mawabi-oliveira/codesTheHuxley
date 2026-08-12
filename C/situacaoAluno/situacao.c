#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float n1, n2, n3;
    scanf("%f %f %f", &n1, &n2, &n3);
    float media = (n1 + n2 + n3)/3;
    if(media >= 70 && media <= 100){
        printf("A media do aluno foi %.2f e ele foi APROVADO", media);
    }
    else if(media >= 0 && media <= 40){
        printf("A media do aluno foi %.2f e ele foi REPROVADO", media);
    }
    else if(media >= 40 && media <= 70){
        printf("A media do aluno foi %.2f e ele foi FINAL", media);
    }
    else{
        printf("Media invalida");
    }

	return 0;
}