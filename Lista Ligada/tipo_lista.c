#include <stdio.h>
#include <stdlib.h>
#include "ll_int.h"

struct ll_int* ll_int_create() {
    struct ll_int *new_list = (struct ll_int*) malloc(sizeof(struct ll_int));
    new_list->first=0;
    new_list->last=0;
    return new_list;
}
void ll_int_inserir_inicio(struct ll_int *list, int x){
    struct ll_node_int *new_node = (struct ll_node_int*) malloc(sizeof(struct ll_node_int));
    new_node->value = x; // Valor do elemento
    new_node->next = list->first; // Ponteiro apontando para first (o inicio da lista)
    list->first = new_node;
};

void print_list(struct ll_int *list) {
    struct ll_node_int *current = list->first; // Auxiliar para endereço do primeiro
    printf("Lista: ");
    while (current != 0){ // Enquanto != NULL (0)
        printf("%d -> ", current->value); // Acessando o valor 
        current = current->next; // Recebendo o proxima elemento
    }
    printf("NULL \n");
}

