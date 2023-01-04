#include <stdio.h> // Entrada/saída
#include <stdlib.h> // Gerenciamento de memoria
#include "vetor_dinamico.h"

typedef struct array_list_int* list;


int increase_memory(list list) { 
  return 0; 
}

//Reservar mémoria (OK)
list array_list_create() {
   list nova_lista;   
   nova_lista = (list) malloc(sizeof(list));
    if(nova_lista){
        //printf("Memoria alocada com sucesso!");
        nova_lista->data = (int *)malloc(sizeof(int) * 10);
        nova_lista->size = 0;
        nova_lista->capacity = 10;
        return nova_lista; 
    } 
}

//Liberar mémoria (Ok)
void array_list_destroy(list l){
    for (int i = 0; i < l->capacity; i++) {
        free(l->data);
        free(l);
    }
    printf("Memoria Liberada");
}

//Listar os Ponteiros do Arrray
void listar(list l) {
  for (int i = 0; i < l->capacity; i++) {
    printf("\n%d ", l->data[i]);
  }
  printf("\n");
}


//Retorna um elemento localizado no índice index
int array_list_get(list lista, int index, int *error) {
    *error = 0;
    if (index < 0 || index >= lista->size) {
        *error = 1;
        return 0;
    }
    return lista->data[index];
}

int main(){
    list lista = array_list_create();
    listar(lista);
    array_list_destroy(lista);

    return 0;
}
