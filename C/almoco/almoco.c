#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char comida[30], bebida[30];
    scanf("%29s %29s", comida, bebida);
    float preco = 0.0;

    if(strcasecmp(bebida, "suco") == 0){
        preco += 2.5;
    } 

    if(strcasecmp(comida, "estrogonofe") == 0){
        preco += 11.0;
    } 

    if(strcasecmp(bebida, "refrigerante") == 0){
        preco += 3.0;
    } 

    if(strcasecmp(comida, "lasanha") == 0){
        preco += 8.0;
    } 

    printf("%.2f", preco);

    return 0;
}