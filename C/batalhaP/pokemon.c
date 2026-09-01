

int teto(int a, int b) {
    if (a % b == 0) return a / b;
    return (a / b) + 1;
}

int testar_buffs(int b, int v1, int v2, int d1, int d2, int min_turnos) {
    if (b == 1000) return min_turnos; 
    
    int turnos_ataque = teto(v2, d1 + (b * 50));
    int total_turnos = b + turnos_ataque;
    
    if (total_turnos < min_turnos) {
        min_turnos = total_turnos;
    }
    
    return testar_buffs(b + 1, v1, v2, d1, d2, min_turnos);
}

void processar_batalhas(int count, int n) {
    if (count == n) return;
    
    int v1, v2, d1, d2;
    scanf("%d %d %d %d", &v1, &v2, &d1, &d2);
    
    int turnos_sobrevivencia = teto(v1, d2);
    int min_turnos = testar_buffs(0, v1, v2, d1, d2, 1000000);
    
    if (min_turnos <= turnos_sobrevivencia) {
        printf("Clodes\n");
    } else {
        printf("Bezaliel\n");
    }
    
    processar_batalhas(count + 1, n);
}

int main() {
    int n;
    scanf("%d", &n);
    processar_batalhas(0, n);
    return 0;
}