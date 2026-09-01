#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap(double *a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_pass(double *a, double *b, double *c, double *d) {
    if (*a > *b) swap(a, b);
    if (*b > *c) swap(b, c);
    if (*c > *d) swap(c, d);
}

void sort_4(double *a, double *b, double *c, double *d, int passes) {
    if (passes > 0) {
        bubble_pass(a, b, c, d);
        sort_4(a, b, c, d, passes - 1);
    }
}

int main() {
    double a, b, c, d;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    
    sort_4(&a, &b, &c, &d, 4);
    
    printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n", a, c, d, b);
    
    return 0;
}