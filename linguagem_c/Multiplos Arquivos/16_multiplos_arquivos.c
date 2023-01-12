#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "16_multiplos_arquivos.h"

  
int append_int(int a[], int tamanho, int capacidade, int x){
    if (tamanho != capacidade)
    {
        a[tamanho++]=x;
        return tamanho;
    }
    
}

int insert_int(int a[], int tamanho, int capacidade, int x){
    return 0;
}

int remove_int(int a[], int tamanho, int capacidade, int x){
    return 0;
}

int find_int(int a[], int tamanho, int capacidade, int x){
    return 0;
}

int main(){
    clock_t inicio, fim;
    int i, erro, *area1, qtd_elemntos=10, qtd_elemntos_usados=0; // ponteiro + qua
    area1 = (int*) malloc(sizeof(int)*qtd_elemntos);
    inicio = clock();      
    return 0;
} 