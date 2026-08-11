#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num1, num2, num3;
    int result;
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 == num2 && num2 == num3){
        result = 1;
    } else if (num1 != num2 && num1 != num3 && num2 != num3){
        result = 2;
    } else  {
       result = 3;
    }

    printf("%d", result);

	return 0;
}