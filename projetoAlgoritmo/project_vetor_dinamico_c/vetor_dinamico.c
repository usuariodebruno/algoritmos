#include <stdio.h> // Entrada/saída
#include <stdlib.h> // Gerenciamento de memoria
#include "vetor_dinamico.h"

typedef struct array_list_int* list;

list array_list_create() {
   list nova_lista;   
   nova_lista = (list) malloc(sizeof(list));
    if(nova_lista){
        printf("Memoria alocada com sucesso!");
        nova_lista->data = (int *)malloc(sizeof(int) * 10);
        nova_lista->size = 0;
        nova_lista->capacity = 10;
        return nova_lista; 
    } 
}

void listar(list l) {
  for (int i = 0; i < l->capacity; i++) {
    printf("\n%d ", l->data[i]);
  }
  printf("\n");
}

int main(){
    list lista = array_list_create();
    listar(lista);

    return 0;
}
