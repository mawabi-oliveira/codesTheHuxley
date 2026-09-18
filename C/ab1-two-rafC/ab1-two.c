#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int album(int n, int ano_nasc)
{
    int a, t;
    if (n == 0)
        return 1;
    scanf("%d %d", &a, &t);
    return (a - t == ano_nasc) && album(n - 1, ano_nasc);
}

int main()
{
    int n, a, t;
    scanf("%d", &n);
    scanf("%d %d", &a, &t);
    if (album(n - 1, a - t))
        printf("idades corretas\n");
    else
        printf("mentiu a idade\n");
    return 0;
}

