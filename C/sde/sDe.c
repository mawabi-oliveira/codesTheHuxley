#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float x1, x2;
    if (a == 0){
        printf("NEESG");
    } else{
    float delta = b*b-4*a*c;
    if(delta == 0){
        x1 = -b/(2*a);
        x2 = -b/(2*a);
        printf("%.2f\n%.2f\n", x1, x2);
    }
    else if (delta > 0) {
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    printf("%.2f\n%.2f\n", x1, x2);
    } 
    else if (delta < 0){
        printf("NRR");
    }
}

	return 0;
}