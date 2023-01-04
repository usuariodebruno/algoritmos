#ifndef __VETOR_DINAMICO__
#define __VETOR_DINAMICO__

struct vetor_dinamico {
      int *data;
      unsigned int size, capacity;
      
};

/*
      append recebe um ponteiro (*a) para não haver uma copia da estrutura e a função irá alterar o tamanho(size) do array

*/
void * append_int(struct  vetor_dinamico * a, int x, int *erro);     

#endif