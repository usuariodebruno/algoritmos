/*  Primo Fácil */

#include<stdio.h> 
int main() {
    int num, i, resultado = 0;

    scanf("%d", &num);
    if (num > 1) {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                resultado++;
                break;
            }
        }

        if (resultado == 0)
            printf("Sim");    
        else
            printf("Nao");

    }
    else {
        printf("Nao");
    }
    
    return 0;
}