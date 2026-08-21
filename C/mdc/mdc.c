#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int mdc(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return mdc(b, (a % b));
    }
}

int main()
{
    int a, b;
    if (scanf("%d %d", &a, &b) != 2 || (a == 0 && b == 0))
    {

        return 0;
    }
    else
    {
        printf("%d\n", mdc(a, b));
        return main();
    }
  
    return 0;
}