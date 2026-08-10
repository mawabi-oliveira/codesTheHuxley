#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int pH;
    do {
        scanf("%d", &pH);
    } while(pH <1 || pH > 14);

    int iAcidez = pH;


    scanf("%d", &iAcidez);

    if (iAcidez < 7) {
        printf("Acida");
    } else if (iAcidez == 7) {
        printf("Neutra");
    } else {
        printf("Basica");
    }

    return 0;
}
