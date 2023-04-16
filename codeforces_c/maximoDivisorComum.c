/* MDC */
 
#include <stdio.h>
int calcularMDC(int num1, int num2) {
 
    int resto;
 
    do {
        resto = num1 % num2;
 
        num1 = num2;
        num2 = resto;
 
    } while (resto != 0);
 
    return num1;
}
int main()
{
    long int num, num2; int mdc;
    scanf("%ld %ld", &num, &num2);
    mdc = calcularMDC(num, num2);
    printf("%d", mdc);
   
}
 