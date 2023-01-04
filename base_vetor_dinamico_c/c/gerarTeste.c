#include <stdio.h> // Entrada/saída
#include <time.h>

int main(){
    int i, tam;

    scanf("%d", &tam);
    printf("%d\n", tam);
    srand(time(NULL));

/*
    A FUNÇÃO RAND PODE ME GERAR VALORES MUITO ALTOS
    PARA TERMOS UM CONTROLE, DIVIDIMOS O RETORNO DA FUNÇÃO POR MIL
    E PEGAMOS O RESTO PARA GARATIR UMA SAIDA ENTRE 0 A 999
*/
    for(i = 0; i < tam; i++)       
        printf("%d\n", rand() % 1000); 
    printf("\n");
    
    return 0;
}