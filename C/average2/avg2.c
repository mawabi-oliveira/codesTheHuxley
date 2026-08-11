#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {    

    float A, B, C;

    scanf("%f %f %f", &A, &B, &C);

    float avg = (A * 2 + B * 3 + C * 5) / 10;

    printf("MEDIA = %.1f\n", avg);

	return 0;
}