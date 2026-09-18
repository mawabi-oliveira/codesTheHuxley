#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int yuriGanha(int yuri, int kaio)
{
    int diferenca = (kaio - yuri + 5) % 5;

    if (diferenca == 1)
    {
        return 1;
    }
    else
    {
        if (diferenca == 2)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

void jogar(int rodada, int total,
           int *vitoriasYuri, int *vitoriasKaio)
{
    if (rodada > total)
    {
        return;
    }
    else
    {
        int yuri, kaio;

        scanf("%d %d", &yuri, &kaio);

        if (yuriGanha(yuri, kaio))
        {
            (*vitoriasYuri)++;
        }
        else
        {
            (*vitoriasKaio)++;
        }

        jogar(rodada + 1, total,
              vitoriasYuri, vitoriasKaio);
    }
}

int main()
{
    int n;
    int yuri = 0;
    int kaio = 0;

    scanf("%d", &n);

    jogar(1, n, &yuri, &kaio);

    if (yuri > kaio)
    {
        printf("Kaio foi o perdedor.\n");
    }
    else
    {
        printf("Yuri foi o perdedor.\n");
    }

    return 0;
}