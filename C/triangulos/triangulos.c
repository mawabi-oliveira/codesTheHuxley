#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    if(A == B && B == C){
        printf("equilatero\n");
    }
    else if(A == B || A == C || B == C){
        printf("isosceles\n");
    }
    else{
        printf("escaleno\n");
    }

	return 0;
}