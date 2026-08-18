#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    double n1, n2, n3;
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    double media = (n1+n2+n3)/3;
    double media_p = ((n1 *2)+(n2*2)+(n3*3))/7;
    double media_pp = ((n1 *1)+(n2*2)+(n3*2))/5;

    printf("%.2lf\n%.2lf\n%.2lf\n", media, media_p, media_pp);
    return 0;

}
