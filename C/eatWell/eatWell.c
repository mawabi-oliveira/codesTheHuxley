#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float cExpenses;

    scanf("%f", &cExpenses);

    float tip = cExpenses * 1.10;

    printf("%.2f\n", tip);

	return 0;
}