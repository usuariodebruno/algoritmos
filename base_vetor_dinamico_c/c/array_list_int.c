/**
 *  \file array_list_int.c C dynamic array of int values library
 *
 * \author
 * \date
 *
 */

#include "array_list_int.h"
#include <stdlib.h>

/**
 * \brief Struct to store dynamic array.
 *
 */
struct array_list_int {
  int *data;
  unsigned int size, capacity;
};

/**
 * \brief Increases int list capacity
 *
 * \return A boolean indicating if the capacity was increased.
 * \todo Implement function correctly
 */

int increase_memory(array_list_int *list, int ) { 
  return 0; 
}

int increase_memory(struct array_list_int *list) {
    int *new_mem = (int*) malloc(sizeof(int) * (list->capacity));
    int *old_mem = list->data;

    for (int i = 0; i<list->size; ++i) {
        *(new_mem+i) = *(old_mem+i);
    }
    list->data = new_mem;
    free(old_mem);
    return 0;
}

array_list_int *array_list_create() {
  array_list_int *new_list = (array_list_int *)malloc(sizeof(array_list_int)); // RETORNA SE HÁ ESSA MEMORIA ?

  if (new_list == 0) /* Could not allocate memory for list */
    return 0;
    
  new_list->data = (int *)malloc(sizeof(int) * 8); /* Initial size: 8*/
  if (new_list->data == 0) { /* Could not allocate memory for list data */
    free(new_list);
    return 0; /* Returns 0 if could not create list*/
  }
  new_list->size = 0;
  new_list->capacity = 8;
  return new_list; /* Returns pointer to new allocated array_list */
}

int array_list_get(array_list_int *list, int index, int *error) {
  *error = 0;
  if (index < 0 || index >= list->size) {/* O índice deve ser válido*/
    *error = 1;
    return 0;
  }
  return list->data[index];
}


//Adiciona novo elemento ao fim da lista
unsigned int array_list_push_back(array_list_int *list, int value) {
  if (list->capacity == list->size) {
    if (!increase_memory(list)) /* Need to increase memory */
      return array_list_size(list);
  }

  list->data[list->size] = value;
  list->size++;
  return array_list_size(list);
}

/**
 * \todo Implement function
 */
unsigned int array_list_pop_back(array_list_int *list) {
  return array_list_size(list);
}

unsigned int array_list_size(array_list_int *list) {
   return list->size;
}

/**
 * \todo Implement function
 */
int array_list_find(array_list_int *list, int element) { 
  return -1;
}

/**
 * \todo Implement function
 * 
 * receber um ponteiro para nao haver uma copia da estrutura do struct 
 */
unsigned int array_list_insert_at(array_list_int *list, int index, int value) {
  return array_list_size(list);
}

/**
 * \todo Implement function !!!!!!
 */
unsigned int array_list_remove_from(array_list_int *list, int index) {

  return array_list_size(list);
}

//Retorna a capacidade do array
unsigned int array_list_capacity(array_list_int *list) {
  return list->capacity; // ACESSANDO ATRIBUTO DO STRUCT POR PONTEIRO 
}

/**
 * \todo Retorna a porcetagem ocupada do array em relação a sua capacidade
 */
double array_list_percent_occupied(array_list_int *list) {
  return (array_list_size(list)/array_list_capacity(list))*100; // (tamanho/capacidae)*100
   
}

/**
 * \todo libera a memoria 
 */
void array_list_destroy(array_list_int *list) {
  free(list->data); // liberando do ponteiro que endereço de memoria que contem uma struct  
  free(list); // liberando memoria de uma struct
}
