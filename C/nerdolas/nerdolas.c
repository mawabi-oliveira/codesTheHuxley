#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char esc1, esc2, esc3, esc4; 
    char esc5, esc6, esc7, esc8; 
    
    scanf(" %c %c %c %c", &esc1, &esc2, &esc3, &esc4);
    scanf(" %c %c %c %c", &esc5, &esc6, &esc7, &esc8);

    int n1, n2, n3, n4, n5;       
    int n6, n7, n8, n9, n10;      
    
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    scanf("%d %d %d %d %d", &n6, &n7, &n8, &n9, &n10);

    int pontos_ryan, pontos_filipe, pontos_ruan, pontos_heron;
    int valor1, valor2;
    //
    if (esc1 == 'a') valor1 = n1;
    else if (esc1 == 'b') valor1 = n2;
    else if (esc1 == 'c') valor1 = n3;
    else if (esc1 == 'd') valor1 = n4;
    else if (esc1 == 'e') valor1 = n5;

    if (esc5 == 'i') valor2 = n6;
    else if (esc5 == 'j') valor2 = n7;
    else if (esc5 == 'k') valor2 = n8;
    else if (esc5 == 'l') valor2 = n9;
    else if (esc5 == 'm') valor2 = n10;

    pontos_ryan = (valor1 * valor2) % 100;
    // 
    if (esc2 == 'a') valor1 = n1;
    else if (esc2 == 'b') valor1 = n2;
    else if (esc2 == 'c') valor1 = n3;
    else if (esc2 == 'd') valor1 = n4;
    else if (esc2 == 'e') valor1 = n5;

    if (esc6 == 'i') valor2 = n6;
    else if (esc6 == 'j') valor2 = n7;
    else if (esc6 == 'k') valor2 = n8;
    else if (esc6 == 'l') valor2 = n9;
    else if (esc6 == 'm') valor2 = n10;

    pontos_filipe = (valor1 * valor2) % 100;
    //
    if (esc3 == 'a') valor1 = n1;
    else if (esc3 == 'b') valor1 = n2;
    else if (esc3 == 'c') valor1 = n3;
    else if (esc3 == 'd') valor1 = n4;
    else if (esc3 == 'e') valor1 = n5;

    if (esc7 == 'i') valor2 = n6;
    else if (esc7 == 'j') valor2 = n7;
    else if (esc7 == 'k') valor2 = n8;
    else if (esc7 == 'l') valor2 = n9;
    else if (esc7 == 'm') valor2 = n10;

    pontos_ruan = (valor1 * valor2) % 100;
    // 
    if (esc4 == 'a') valor1 = n1;
    else if (esc4 == 'b') valor1 = n2;
    else if (esc4 == 'c') valor1 = n3;
    else if (esc4 == 'd') valor1 = n4;
    else if (esc4 == 'e') valor1 = n5;

    if (esc8 == 'i') valor2 = n6;
    else if (esc8 == 'j') valor2 = n7;
    else if (esc8 == 'k') valor2 = n8;
    else if (esc8 == 'l') valor2 = n9;
    else if (esc8 == 'm') valor2 = n10;

    pontos_heron = (valor1 * valor2) % 100;
    // 
    int maior = pontos_ryan;
    int menor = pontos_ryan;

    if (pontos_filipe > maior) maior = pontos_filipe;
    if (pontos_ruan > maior) maior = pontos_ruan;
    if (pontos_heron > maior) maior = pontos_heron;

    if (pontos_filipe < menor) menor = pontos_filipe;
    if (pontos_ruan < menor) menor = pontos_ruan;
    if (pontos_heron < menor) menor = pontos_heron;
    // 
    if (maior == pontos_ryan) printf("Ryan %d - Vencedor\n", maior);
    else if (maior == pontos_filipe) printf("Filipe %d - Vencedor\n", maior);
    else if (maior == pontos_ruan) printf("Ruan %d - Vencedor\n", maior);
    else if (maior == pontos_heron) printf("Heron %d - Vencedor\n", maior);
    // 
    if (menor == pontos_ryan) printf("Ryan %d - Perdedor\n", menor);
    else if (menor == pontos_filipe) printf("Filipe %d - Perdedor\n", menor);
    else if (menor == pontos_ruan) printf("Ruan %d - Perdedor\n", menor);
    else if (menor == pontos_heron) printf("Heron %d - Perdedor\n", menor);

    return 0;
}