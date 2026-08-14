#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*
dado sexo idade nacionalidade e v ingresso,
retorna preco
caso idade invalida
caso ingresso nao possa ser vendido (nao pode comprar)
cada pais tem a maioridade e n pode vender para menores em alguns
ha descontos:
nao eh cumulativo

se for fem, 10% de desconto 0.10
se for brasileira 0.50
se for argentido masc maioridade, nao tem desconto
se for argen femin maioridade, 0.20
se for argentino masc e fem menor 0.20
se for frances ou croata maioridade 0.30
se for italiano ou russo masc fem, menor 0.40
se for fem e mas maior 0.30



deve ser aplicado o maior desconto
exemplo: russa feminino 0.30 inves de 0.10




Brasileira
Argentina {
maioridade >= 18}
Francesa
Croata
{
maioridade >= 21}
Italiana
Russa
{
>= 16}
C character


*/
int main()
{
    char nacionalidade, sexo;
    int idade;
    double v_ingresso;
    scanf(" %c %d %c %lf", &nacionalidade, &idade, &sexo, &v_ingresso);

    if (idade > 120 || idade <= 0)
    {
        printf("idade invalida!\n");
        return 0;
    }
    if ((nacionalidade == 'F' || nacionalidade == 'C') && idade < 21)
    {
        printf("nao pode comprar\n");
        return 0;
    }

    if (nacionalidade == 'B')
    {
        v_ingresso = v_ingresso * 0.50;
    }

    else if (nacionalidade == 'A' && idade >= 18 && sexo == 'M')
    {
        v_ingresso = v_ingresso;
    }

    else if (nacionalidade == 'A' && idade >= 18 && sexo == 'F')
    {
        v_ingresso = v_ingresso * 0.80;
    }

    else if (nacionalidade == 'A' && idade < 18 && (sexo == 'M' || sexo == 'F'))
    {
        v_ingresso = v_ingresso * 0.80;
    }

    else if ((nacionalidade == 'F' || nacionalidade == 'C') && idade >= 21 && (sexo == 'M' || sexo == 'F'))
    {
        v_ingresso = v_ingresso * 0.70;
    }

    else if ((nacionalidade == 'I' || nacionalidade == 'R') && idade < 16 && (sexo == 'M' || sexo == 'F'))
    {
        v_ingresso = v_ingresso * 0.60;
    }

    else if ((nacionalidade == 'I' || nacionalidade == 'R') && idade >= 16 && (sexo == 'M' || sexo == 'F'))
    {
        v_ingresso = v_ingresso * 0.70;
    }

    else if (sexo == 'F')
    {
        v_ingresso = v_ingresso * 0.90;
    }

    printf("R$ %.2lf\n", v_ingresso);

    return 0;
}