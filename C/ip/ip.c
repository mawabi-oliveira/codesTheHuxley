#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

 #include <stdio.h>

// lendo cada bit

int converter(int pos)
{
    int bit;

    if (pos == 8)
    {
        return 0;
    }
    else
    {
        scanf("%d", &bit);

        if (pos == 0)
        {
            return bit * 128 + converter(pos + 1);
        }
        else
        {
            if (pos == 1)
            {
                return bit * 64 + converter(pos + 1);
            }
            else
            {
                if (pos == 2)
                {
                    return bit * 32 + converter(pos + 1);
                }
                else
                {
                    if (pos == 3)
                    {
                        return bit * 16 + converter(pos + 1);
                    }
                    else
                    {
                        if (pos == 4)
                        {
                            return bit * 8 + converter(pos + 1);
                        }
                        else
                        {
                            if (pos == 5)
                            {
                                return bit * 4 + converter(pos + 1);
                            }
                            else
                            {
                                if (pos == 6)
                                {
                                    return bit * 2 + converter(pos + 1);
                                }
                                else
                                {
                                    return bit * 1 + converter(pos + 1);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void lerOctetos(int pos)
{
    if (pos == 4)
    {
        return;
    }
    else
    {
        int resultado;

        resultado = converter(0);

        printf("%d", resultado);

        if (pos < 3)
        {
            printf(".");
        }

        lerOctetos(pos + 1);
    }
}

int main()
{
    lerOctetos(0);

    printf("\n");

    return 0;
}