#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    double pi = 3.14159;
    double radius;

    scanf("%lf", &radius);
    double area = pi * radius/100 * radius/100;

    printf("Area = %.4lf\n", area);

	return 0;
}