#include <stdio.h>

int main() {
    /*
        No caso se for declaração de variável:
        *ponteiro = Aloca memória para armazenamento de um ponteiro apontando para nulo;
        ponteiro  = alocaria memória para armazenar a variável;
        e &ponteiro = seria uma instrução inválida.
    */
    int var = 50; 
    int* p;         // Aloca um espaço de memória para armazenar um ponteiro apontando com valor null; 
    p = &var;         // Ponteiro recebe endereço de memoria (&var) da variavel int var 

    /*
        NA MAnIPULAÇÃO  
        *ponteiro   = significaria acesso ao primeiro endereço de memória, onde está armazenado o valor;
        ponteiro    = significaria o valor armazenado na memória;
        e &ponteiro = Endereço de memoria do ponteito
    */ 
    printf("Valor de *p: { %d  }\n",*p);     //int 50 
    printf("Valor de p:  { %p }\n",p);      //0x0061FF1C Endereço do memoria de (&a)
    printf("Endereco de p:{ %p }\n\n\n", &p); //0x00255100 Endereço de memória do ponteiro


    printf("Valor de var:     %d\n", var); 
    printf("Endereco de var:  %p\n",&var); ////0x0061FF1C Endereço do ()
    return 0;
}