#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    if(A == B || A == C || B == A || B == C || C == A || C == B){
        printf("S"); 
    }
    else if(A + B == C || A + C == B || C + B == A ){
        printf("S");
    } 
    else{
        printf("N");
    }

    
	return 0;
}