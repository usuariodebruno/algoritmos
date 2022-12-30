#include "array_list.h"
#include <stdlib.h>

list list_create(){
    list l;
    l = (list)malloc(sizeof(struct array_list));
    l->capacity = 10;
    l->used=0;
    l->data = (int*)malloc(sizeof(int)*(l->capacity));
    return l;
}

void list_destroy(list l){
    free(l->data);
    free(l);
}

int list_get(list l, int index){
    return l->data[index];
}

void list_append(list l, int value){
    if (l->used==l->capacity){
        int j,*new_data = (int*)malloc(sizeof(int)*(l->capacity+10));
        l->capacity+=10;
        for (j=0 ; j<l->used ; ++j)
            new_data[j]=l->data[j];
        int *old_data = l->data;
        l->data = new_data;
        free(old_data);
    }
    l->data[l->used++] = value;
}

int list_size(list l){
    return l->used;
}

int list_capacity(list l){
    return l->capacity;
}
