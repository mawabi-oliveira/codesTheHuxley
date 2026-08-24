#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int multiplos(int N, int A, int B){
        if(A > B){
            return 0;
        }

        int achado = 0;

        if(A % N == 0){
            printf("%d\n", A);
            achado = 1;
        }

        return multiplos(N, A + 1, B) || achado;

}

int main(){
    int N, A, B;
    scanf("%d %d %d", &N, &A, &B);

    int resultado = multiplos(N, A, B);

    if (!resultado){
        printf("INEXISTENTE");
    }

    return 0;
}