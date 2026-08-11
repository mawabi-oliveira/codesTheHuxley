#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float Ft;
  
    scanf("%f", &Ft);

    float Cs = (Ft - 32)/1.8;

    printf("%.2f\n", Cs);

	return 0;
}