#include <stdio.h>
#include <stdlib.h>
#include "ll_int.h"

int main(){
    struct ll_int *l = ll_int_create();
    int i;

    for (i = 0; i < 10; i++){
        ll_int_inserir_inicio(l, i*5);
    }
        
    //Percorrer lista
    print_list(l);
    return 0;
};
