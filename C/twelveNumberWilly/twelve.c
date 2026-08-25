#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, num;
    scanf("%d", &n);
    int contador = 0;
   
    for(int i = 0; i < 20; i++){
        scanf("%d", &num);
        if(num < 0){
            break;
        }
        
        if(num == n){
        contador++;
    }
       
}
    
        printf("%d aparece %d vezes", n, contador);


	return 0;
}