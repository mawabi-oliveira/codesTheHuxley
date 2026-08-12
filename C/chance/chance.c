#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int problemas, q_resolvidas;
    scanf("%d %d", &problemas, &q_resolvidas);
    double percentual = (q_resolvidas*100.0)/problemas;

    if(percentual >= 0 && percentual < 20){
       printf("%.2lf%% 4.40%% Pessimo\n", percentual);
    }
    
    else if(percentual >= 20 && percentual < 40){
       printf("%.2lf%% 31.65%% Ruim\n", percentual);
    }

    else if(percentual >= 40 && percentual < 60){
       printf("%.2lf%% 56.82%% Bom\n", percentual);
    }

    else if(percentual >= 60 && percentual < 80){
       printf("%.2lf%% 80.00%% Muito Bom\n", percentual);
    }
    else if(percentual >= 80 && percentual < 100){
        printf("%.2lf%% 94.00%% Excelente\n", percentual);
    }
    
	return 0;

}