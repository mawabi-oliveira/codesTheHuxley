#include <stdio.h>

int main() {
    double salario_pedro = 0;
    double preco_km = 0, km_rodados = 0, tarifa = 0;
    scanf("%lf %lf %lf %lf", &salario_pedro, &tarifa, &preco_km, &km_rodados);
    int viagem = 0;
    scanf("%d", &viagem);

    double tarifa_final = tarifa + (preco_km * km_rodados);

    if (viagem == 1) {
        tarifa_final = tarifa_final * 1.10;
    }

    double salario_uso = salario_pedro * 0.30;
    double resto = salario_uso - tarifa_final;
    double faltou = tarifa_final - salario_uso;

    if (salario_uso >= tarifa_final) {
        printf("Vai poder viajar.\n");
        printf("%.2f\n", tarifa_final);
        printf("%.2f\n", resto);
    } else {
        printf("Não vai poder viajar.\n");
        printf("%.2f\n", faltou);
    }

    return 0;
}