#include <stdio.h>

int main() {
    int j, r , jogada, vencedor = 0;
    scanf("%d %d", &j, &r);

    int pontos[j]; 
    for (int i = 0; i < j; i++) {
        pontos[i]=0; //pontos dos jogadores começa c zero
    }

    for (int i = 0; i < j *r; i++) { // encontrar jogador com mais pontos 
        scanf("%d", &jogada);
        pontos[i % j]+=jogada;
    }

    for (int i = 1; i < j; i++) {
        if (pontos[i] >= pontos[vencedor]) {
            vencedor=i; //jogador com a maior soma de pontos
        }
    }
    printf("%d\n", (vencedor + 1) );
    return 0;
}
