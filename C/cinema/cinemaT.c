#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int ing = 20.00;
    int ingMeia = ing/2;
    int est;
    int idoso;
    scanf("%d %d", &est, &idoso);
    if(est == 1 && idoso == 0){
        ing = ingMeia;
    } else if (idoso == 1 && est == 0){
        ing = ingMeia;
    }
        else if (est = 1 && idoso == 1){
            ing = ingMeia;
        }
        else {
        ing;
    }

    if(ing == ingMeia){
        ing = 1;
    } else {
        ing = 0;
    }

    printf("%d", ing);
    
	return 0;
}