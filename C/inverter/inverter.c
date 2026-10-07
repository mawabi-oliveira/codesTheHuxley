#include <stdio.h>
#include <math.h>
#include <string.h>

void inverter(char str[], int i)
{

    if (str[i] == 0)
    {
        return;
    }

    else
    {
        inverter(str, i + 1);
        printf("%c", str[i]);
    }

}

int main() {

    char c[100];

    scanf("%[^\n]", c);

    inverter(c, 0);

    printf("\n");

    return 0;

}


