#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int A, B, C;
    int H, L;
    scanf("%d %d %d", &A, &B, &C);
    scanf("%d %d", &H, &L);

    if((A <= H && B <= L) || (A <= L && B <= H))
    {
        printf("S\n");
    }
    else if((A <= H && C <= L) || (A <= L && C <= H))
    {
        printf("S\n");
    }
    
    else if((B <= H && C <= L) || (B <= L && C <= H))
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }

	return 0;
}