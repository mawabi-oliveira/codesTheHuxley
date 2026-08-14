#include <stdio.h>

int main()
{
    int cp1, cp2, cp3;
    double ap1, ap2, ap3, vp1, vp2, vp3;

    int ct1, ct2, ct3;
    double at1, at2, at3, vt1, vt2, vt3;

    int vitorias_pedro = 0, vitorias_tulio = 0;

    scanf("%d %lf %lf", &cp1, &ap1, &vp1);
    scanf("%d %lf %lf", &cp2, &ap2, &vp2);
    scanf("%d %lf %lf", &cp3, &ap3, &vp3);

    scanf("%d %lf %lf", &ct1, &at1, &vt1);
    scanf("%d %lf %lf", &ct2, &at2, &vt2);
    scanf("%d %lf %lf", &ct3, &at3, &vt3);

    if (cp1 == 1 && ct1 == 3)
        vp1 *= 1.30;
    if (ct1 == 1 && cp1 == 3)
        vt1 *= 1.30;
    if (cp1 == 3 && ct1 == 2)
        ap1 *= 1.25;
    if (ct1 == 3 && cp1 == 2)
        at1 *= 1.25;
    if (cp1 == 2 && ct1 == 1)
    {
        vp1 *= 1.15;
        ap1 *= 1.15;
    }
    if (ct1 == 2 && cp1 == 1)
    {
        vt1 *= 1.15;
        at1 *= 1.15;
    }

    if (cp2 == 1 && ct2 == 3)
        vp2 *= 1.30;
    if (ct2 == 1 && cp2 == 3)
        vt2 *= 1.30;
    if (cp2 == 3 && ct2 == 2)
        ap2 *= 1.25;
    if (ct2 == 3 && cp2 == 2)
        at2 *= 1.25;
    if (cp2 == 2 && ct2 == 1)
    {
        vp2 *= 1.15;
        ap2 *= 1.15;
    }
    if (ct2 == 2 && cp2 == 1)
    {
        vt2 *= 1.15;
        at2 *= 1.15;
    }

    if (cp3 == 1 && ct3 == 3)
        vp3 *= 1.30;
    if (ct3 == 1 && cp3 == 3)
        vt3 *= 1.30;
    if (cp3 == 3 && ct3 == 2)
        ap3 *= 1.25;
    if (ct3 == 3 && cp3 == 2)
        at3 *= 1.25;
    if (cp3 == 2 && ct3 == 1)
    {
        vp3 *= 1.15;
        ap3 *= 1.15;
    }
    if (ct3 == 2 && cp3 == 1)
    {
        vt3 *= 1.15;
        at3 *= 1.15;
    }

    if (vp1 <= vt1)
    {
        vt1 -= ap1;
        if (vt1 <= 0)
        {
            printf("Rodada1: Pedro\n");
            vitorias_pedro++;
        }
        else
        {
            vp1 -= at1;
            if (vp1 <= 0)
            {
                printf("Rodada1: Tulio\n");
                vitorias_tulio++;
            }
            else
            {
                if (vp1 > vt1)
                {
                    printf("Rodada1: Pedro\n");
                    vitorias_pedro++;
                }
                else if (vt1 > vp1)
                {
                    printf("Rodada1: Tulio\n");
                    vitorias_tulio++;
                }
                else if (ap1 > at1)
                {
                    printf("Rodada1: Pedro\n");
                    vitorias_pedro++;
                }
                else
                {
                    printf("Rodada1: Tulio\n");
                    vitorias_tulio++;
                }
            }
        }
    }
    else
    {
        vp1 -= at1;
        if (vp1 <= 0)
        {
            printf("Rodada1: Tulio\n");
            vitorias_tulio++;
        }
        else
        {
            vt1 -= ap1;
            if (vt1 <= 0)
            {
                printf("Rodada1: Pedro\n");
                vitorias_pedro++;
            }
            else
            {
                if (vp1 > vt1)
                {
                    printf("Rodada1: Pedro\n");
                    vitorias_pedro++;
                }
                else if (vt1 > vp1)
                {
                    printf("Rodada1: Tulio\n");
                    vitorias_tulio++;
                }
                else if (ap1 > at1)
                {
                    printf("Rodada1: Pedro\n");
                    vitorias_pedro++;
                }
                else
                {
                    printf("Rodada1: Tulio\n");
                    vitorias_tulio++;
                }
            }
        }
    }

    if (vp2 <= vt2)
    {
        vt2 -= ap2;
        if (vt2 <= 0)
        {
            printf("Rodada2: Pedro\n");
            vitorias_pedro++;
        }
        else
        {
            vp2 -= at2;
            if (vp2 <= 0)
            {
                printf("Rodada2: Tulio\n");
                vitorias_tulio++;
            }
            else
            {
                if (vp2 > vt2)
                {
                    printf("Rodada2: Pedro\n");
                    vitorias_pedro++;
                }
                else if (vt2 > vp2)
                {
                    printf("Rodada2: Tulio\n");
                    vitorias_tulio++;
                }
                else if (ap2 > at2)
                {
                    printf("Rodada2: Pedro\n");
                    vitorias_pedro++;
                }
                else
                {
                    printf("Rodada2: Tulio\n");
                    vitorias_tulio++;
                }
            }
        }
    }
    else
    {
        vp2 -= at2;
        if (vp2 <= 0)
        {
            printf("Rodada2: Tulio\n");
            vitorias_tulio++;
        }
        else
        {
            vt2 -= ap2;
            if (vt2 <= 0)
            {
                printf("Rodada2: Pedro\n");
                vitorias_pedro++;
            }
            else
            {
                if (vp2 > vt2)
                {
                    printf("Rodada2: Pedro\n");
                    vitorias_pedro++;
                }
                else if (vt2 > vp2)
                {
                    printf("Rodada2: Tulio\n");
                    vitorias_tulio++;
                }
                else if (ap2 > at2)
                {
                    printf("Rodada2: Pedro\n");
                    vitorias_pedro++;
                }
                else
                {
                    printf("Rodada2: Tulio\n");
                    vitorias_tulio++;
                }
            }
        }
    }

    if (vp3 <= vt3)
    {
        vt3 -= ap3;
        if (vt3 <= 0)
        {
            printf("Rodada3: Pedro\n");
            vitorias_pedro++;
        }
        else
        {
            vp3 -= at3;
            if (vp3 <= 0)
            {
                printf("Rodada3: Tulio\n");
                vitorias_tulio++;
            }
            else
            {
                if (vp3 > vt3)
                {
                    printf("Rodada3: Pedro\n");
                    vitorias_pedro++;
                }
                else if (vt3 > vp3)
                {
                    printf("Rodada3: Tulio\n");
                    vitorias_tulio++;
                }
                else if (ap3 > at3)
                {
                    printf("Rodada3: Pedro\n");
                    vitorias_pedro++;
                }
                else
                {
                    printf("Rodada3: Tulio\n");
                    vitorias_tulio++;
                }
            }
        }
    }
    else
    {
        vp3 -= at3;
        if (vp3 <= 0)
        {
            printf("Rodada3: Tulio\n");
            vitorias_tulio++;
        }
        else
        {
            vt3 -= ap3;
            if (vt3 <= 0)
            {
                printf("Rodada3: Pedro\n");
                vitorias_pedro++;
            }
            else
            {
                if (vp3 > vt3)
                {
                    printf("Rodada3: Pedro\n");
                    vitorias_pedro++;
                }
                else if (vt3 > vp3)
                {
                    printf("Rodada3: Tulio\n");
                    vitorias_tulio++;
                }
                else if (ap3 > at3)
                {
                    printf("Rodada3: Pedro\n");
                    vitorias_pedro++;
                }
                else
                {
                    printf("Rodada3: Tulio\n");
                    vitorias_tulio++;
                }
            }
        }
    }

    if (vitorias_pedro > vitorias_tulio)
    {
        printf("Pedro vitorioso\n");
    }
    else
    {
        printf("Tulio vitorioso\n");
    }

    return 0;
}