#ifndef _ARRAY_LIST_INT_H_ 
#define _ARRAY_LIST_INT_H_

// Estrutura 
struct array_list_int {
  int *data;
  unsigned int size, capacity, starting_size;
};

//Incrementa a capadidade de armazenamento do vetor
int increase_memory(struct array_list_int *list);

//Cria uma nova lista, recebendo um tamanho inicial e retorna o ponteiro para o espaço de memoria inicial dessa lista (OK)
struct array_list_int* array_list_create(int starting_size);

//Adiciona o elemento no final da lsita, retorna um inteiro refente ao tamanho do vector (OK)
unsigned int array_list_push_back(struct array_list_int *list, int value);

//Acessa o tamanho de uma lista e retorna um inteiro com a tamanho do array (OK)
unsigned int array_list_size(struct array_list_int *list);

//Acessa a capacidade de uma lista e retorna um inteiro com a capacidade do array (OK)
unsigned int array_list_capacity(struct array_list_int* list);

//Calcula a pocentagem ocupada de uma lista e retorna com decimal 'type double' (OK)
double array_list_percent_occupied(struct array_list_int* list);

//Remove o ultimo indice da lista(OK)
unsigned int array_list_pop_back(struct array_list_int *list);

//Busca de elemento por index e retorna int elemento (OK)
int array_list_get(struct array_list_int *list, int index, int *error);

// Busca um elemento na lista. Retorna o índice onde ele se encontra ou −1 se ele não estiver na lista.  (OK)
int array_list_find( struct array_list_int * list, int element);

//Libera memória usado pela lista list. (OK)
void array_list_destroy(struct array_list_int* list);

// Remove elemento localizado no índice index. (OK)
unsigned int array_list_remove_from( struct array_list_int* list, int index);

//Insere um novo elemento na lista, aumentando a quantidade de elementos. O elemento inserido deve se localizar no índice index(OK)
unsigned int array_list_insert_at(struct array_list_int* list, int index, int value);

// Printar elemtnos da lista 
void print_vector(struct array_list_int *list);



#endif