#include <stdio.h>

int main() {
    int qnt, i;
    double soma = 0, media, abaixo = 0, acima = 0;
    scanf("%d", &qnt);
    
    int valores[qnt];
    for (i = 0; i < qnt; i++) {
        scanf("%d", &valores[i]);
        soma += valores[i];
    }
    media = soma / qnt;
    for (i = 0; i < qnt; i++) {
        if (valores[i] < media) {
            abaixo++;
        } else {
            acima++;
        }
    }  
    printf("%.1f\n", media);
    printf("%.0f\n", abaixo);
    printf("%.0f\n", acima);
    
    return 0;
}