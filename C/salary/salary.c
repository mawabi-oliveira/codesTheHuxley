#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int empNumber;
   int h;
   float valueH;

   scanf("%d %d %f", &empNumber, &h, &valueH);

   float salary = h * valueH;

   printf("NUMBER = %d\n" "SALARY = R$ %.2f\n", empNumber, salary);


	return 0;
}