#include <stdio.h>

int main(){
    int a=10,b=20; // Atribuir valor as variáveis 
    int *pa, *pb; // Atribuir endereços de memórias aos ponteiros
    pa = &a; // pa recebe o endereço de memória da variavel a
    pb = &b;// pb recebe o endereço de memória da variavel b
    *pa = *pb * 2; // acesso o valor que está no esdereço de memoria pb, multiplicando por 2 e abrindo ao endereço de memoria de pa(variavel)
    printf("%d,%d\n",a,b); // apresentando 
    return 0;
}

// programa tem como saida o dobro do valor no endereço de memoria 
//em pb e pb inicial

