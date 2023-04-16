#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó de inteiro (elemetento)
struct ll_node_int{
    int value;
    struct ll_node_int* next; // Ponteiro para próxima estrutura
};

struct ll_node_int *ll_int_inserir_inicio(struct ll_node_int *first, int x){
    struct ll_node_int *new_node = (struct ll_node_int*) malloc(sizeof(struct ll_node_int));
    new_node->value = x; // Valor do elemento
    new_node->next = first; // Ponteiro apontando para first (o inicio da lista)
    first = new_node;
    return first;
};

void print_list(struct ll_node_int *first) {
    struct ll_node_int *current=first; // Auxiliar para endereço do primeiro
    printf("Lista: ");
    while (current != 0){ // Enquanto != NULL (0)
        printf("%d -> ", current->value); // Acessando o valor 
        current = current->next; // Recebendo o proxima elemento
    }
    printf("NULL \n");
}

int main(){
    struct ll_node_int *first=0;
    int i;
    for (i = 0; i < 10; i++)
        first = ll_int_inserir_inicio(first, i*3);
        
    //Percorrer lista
    print_list(first);
    return 0;
}
