#include <stdio.h>

int main() {
    int n, r, i, mergulhador; // var entrada

    scanf("%d %d", &n, &r);

    int voltaram[n];
    for (i = 0; i < n; i++) {
        voltaram[i] = 0; // inicializa todos os mergulhadores como não tendo voltado =
    }

    //Ler merguladores que voltaram
    for (i = 0; i < r; i++) {
        scanf("%d", &mergulhador);
        voltaram[mergulhador-1] = 1; // marca o mergulhador como tendo voltado
    }

    //Verificar alguém não voltou
    int faltam = 0;
    for (i = 0; i < n; i++) {
        if (voltaram[i] != 1) { // se o mergulhador não voltou
            printf("%d ", i+1);
            faltam++; // incrementa a quantidade de mergulhadores que faltam
        }
    }

    if (faltam == 0) { // se todos voltaram
        printf("*");
    }

    printf("\n");

    return 0;
}