#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    float salario;
    scanf("%f", &salario);
    if(salario > 500){
        salario = salario * 1.10;
    }
    else if(salario > 300){
        salario = salario * 1.07;
    }
    else{
        salario = salario * 1.05;
    }

    printf("%.2f", salario);
	return 0;
}