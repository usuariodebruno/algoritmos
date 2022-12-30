#ifndef __ARRAY_LIST__
#define __ARRAY_LIST__

struct array_list{
  int *data,
      capacity,
      used;
};

typedef struct array_list* list;


list list_create();

void list_destroy(list l);

int list_get(list l, int index);

void list_append(list l, int value);

int list_size(list l);

int list_capacity(list l);

#endif