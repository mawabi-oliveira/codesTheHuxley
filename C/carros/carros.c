#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int x, y, d;

    scanf("%d %d", &x, &y);

    scanf("%d", &d);

    int vel_rel = y - x;

    int c = ((d * 60)/vel_rel);

    printf("%d minutos\n", c);

    return 0;
}