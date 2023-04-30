#include <stdio.h>

int main() {
    int n, r, i, j, v, encontrado;
    scanf("%d %d", &n, &r);
    int vet[n+1];
    for (i = 1; i <= n; i++) {
        vet[i] = 0;
    }
    for (i = 0; i < r; i++) {
        scanf("%d", &v);
        vet[v] = 1;
    }
    encontrado = 0;
    for (i = 1; i <= n; i++) {
        if (vet[i] == 0) {
            printf("%d ", i);
            encontrado = 1;
        }
    }
    if (encontrado == 0) {
        printf("*\n");
    } else {
        printf("\n");
    }
    return 0;
}