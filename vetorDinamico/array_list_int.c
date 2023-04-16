#include <stdlib.h>
#include <stdio.h>
#include "array_list_int.h"

// Incrementa memoria para o vetor, realocando e retornando novo seu ponteiro 
int increase_memory(struct array_list_int *list) {   
    int *old_mem = list->data; 

    if (list->starting_size < 8)  {
      list->capacity += list->capacity; // Dobra a capacidade
    } else {
      list->capacity = list->capacity + list->starting_size; // adiciona tamanho inicial a capacity
    }    

     // Novo endenreço de momoria pro ponteiro da struct
    list->data = (int*) realloc(list->data, sizeof(int) * list->capacity); //Ponteiro para um novo espaço do memoria do tamanho da capacidade da estrutura

    return list->data; //Retorna novo ponteiro realocado 
}

struct array_list_int* array_list_create(int start_size_int) {
  struct array_list_int* new_list = malloc(sizeof(struct array_list_int ));
  if (new_list == 0)
    return 0;  

  if (start_size_int < 8)    
    new_list->starting_size = 8;
  else {
     new_list->starting_size = start_size_int;
  } 
  new_list->data = malloc(sizeof(int) * new_list->starting_size);

  if (new_list->data == 0) { // Verificação de alocação
    free(new_list);
    return 0;
  }
  new_list->size = 0;
  new_list->capacity = new_list->starting_size; 
 
  return new_list;
}

//Adiciona novo elemento ao over da lista
unsigned int array_list_push_back(struct array_list_int* list, int value) {  
  if (list->capacity == list->size) {
    list->data = increase_memory(list);
  }

  list->data[list->size] = value;
  list->size++;
  return list->size;
}

//Busca elemnto de posição pelo index
int array_list_get(struct array_list_int *list, int index, int *error) {
  *error = 0;
  if (index < 0 || index >= list->size) {/* Index must be valid*/
    *error = 1; // False
    return 0; // True
  }
  return list->data[index];
}

//Acessa o tamanho de uma lista e retorna um inteiro com a tamanho do array
unsigned int array_list_size(struct array_list_int *list) {
   return list->size;
}

//Retorna a capacidade do array
unsigned int array_list_capacity(struct array_list_int* list) {
  return list->capacity; // ACESSANDO ATRIBUTO DO STRUCT POR PONTEIRO 
}

//Acessa a capacidade de uma lista e retorna um inteiro com a capacidade do array
double array_list_percent_occupied(struct array_list_int* list) {
  printf("%d %d", list->size, list->capacity);
  return (double) list->size / (double) list->capacity; // (tamanho/capacidae)   
}

//Remove o ultimo indice da lista
unsigned int array_list_pop_back(struct array_list_int *list) {
  if (list->size == 0)
    return 0;
  list->size--;  
  return array_list_size(list);
}

// Busca um elemento na lista. Retorna o índice onde ele se encontra ou −1 se ele não estiver na lista.  
int array_list_find( struct array_list_int * list, int element) { 
  for (int i = 0; i < list->size; i++) { //percorrer lista em busca o elemento
    if (list->data[i] == element)
      return i;
  }
  return -1;
}

//Libera memória usado pela lista list.
void array_list_destroy(struct array_list_int* list) { // Libera memória usada pela lista
  free(list->data);
  free(list);
}

// Remove elemento localizado no índice index.
unsigned int array_list_remove_from( struct array_list_int* list, int index) { 
  if(list == 0)
    return 0;
  if (index < 0 || index >= list->size)
    return 0;
  list->size--;
  for (int i = index; i < list->size; i++) {
    list->data[i] = list->data[i+1];
  }
  return list->size;
}

//Insere um novo elemento na lista, aumentando a quantidade de elementos. O elemento inserido deve se localizar no índice index
unsigned int array_list_insert_at(struct array_list_int* list, int index, int value) { 
  if (index < 0 || index >= list->size) return 0;
  if (list->size == list->capacity) increase_memory(list);

  int i;  
  list->size++; //Aumenta vector antes de adicionar novo elementoo

  for ( i = list->size; i > index; --i){ // começo do over; do ultimo ao index; declementando  
      list->data[i] = list->data[i-1]; // Deslocamento dos elementos pro indece anterior
  }

  list->data[index] = value; // Adiciona o value no vector[index]
  return list->size; // retorna o tamanho da lista
}

void print_vector(struct array_list_int *list) {
  int i, x, erro;
  printf("{ ");
  for (i = 0; i < array_list_size(list); ++i) {
    x = array_list_get(list, i, &erro);
    if (!erro) {
      printf("%d ", x);
    } 
  }
  printf("}\n");
}


    