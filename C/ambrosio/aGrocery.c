#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int cod, qtd;
    scanf("%d %d", &cod, &qtd);
    float val;
  

    if(cod == 1){
        val = 5.30;
    }
    else if(cod == 2){
        val = 6.00;
    } 
    else if(cod == 3){
        val = 3.20;
    }
    else{
        val = 2.50;
    }
     float valF = val * qtd;

    if(valF >= 40 || qtd >= 15){
        valF = valF * 0.85;
    }
   
    printf("R$ %.2f\n", valF);


	return 0;
}



