#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int qtd_livros, qtd_alunos;
    
    scanf("%d %d", &qtd_livros, &qtd_alunos);

    float proporcao = (float)qtd_alunos / qtd_livros;
    
    if(proporcao <= 8) {
        printf("A\n");
    }
    else if(proporcao >= 9 && proporcao <= 12) {
        printf("B\n");
    }
    else if(proporcao >= 13 && proporcao <= 18) {
        printf("C\n");
    }
    else if(proporcao > 18) {
        printf("D\n");
    }

    return 0;
}