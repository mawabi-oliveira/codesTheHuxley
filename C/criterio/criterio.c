#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int homem, mais_de_40;

    scanf("%d", &homem);
    scanf("%d", &mais_de_40);

    if (homem == 0 && mais_de_40 == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}