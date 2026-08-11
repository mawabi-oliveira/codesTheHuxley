#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int idd; 
    scanf("%d", &idd);
    if(idd < 16){
        printf("nao eleitor\n");
    }
    else if(idd >= 18 && idd <= 65){
        printf("eleitor obrigatorio\n");
    }
    else if(idd >= 16 &&  idd < 18 || idd >= 66){
        printf("eleitor facultativo\n");
    }

	return 0;
}