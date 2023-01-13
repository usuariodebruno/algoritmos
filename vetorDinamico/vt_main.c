
#include <time.h>
#include "array_list_int.h"

int main () {
    time_t start, over;
    int starting_size, i, x, erro;
    scanf("%d", &starting_size);

    printf("[ NOME FUNCAO | TEMPO EXECUCAO (ms)]\n");
    start = clock();
    struct array_list_int *l01 = array_list_create(starting_size);
    over = clock();
    printf("[ Array_List_Create |  %1fms | Size: %d | Capacidade: %d ]\n", (over-start)/(CLOCKS_PER_SEC/1000.0), l01->size, l01->capacity );

    // Preeencher vector
    start = clock();
    for ( i=0 ; i<starting_size; ++i ){
        scanf("%d", &x);
        array_list_push_back(l01, x);
    }
    over = clock();
    printf("[ Array_List_Push_Back |  %1fms | Size: %d | Capacidade: %d ]\n", (over-start)/(CLOCKS_PER_SEC/1000.0), l01->size, l01->capacity );
    
    print_vector(l01);

    //Adicionando novo elemento para incrementar a capacidade
    start = clock();
    array_list_push_back(l01, l01->starting_size);
    over = clock();
    printf("[ Array_List_Push_Back |  %1fms | Size: %d | Capacidade: %d ]\n", (over-start)/(CLOCKS_PER_SEC/1000.0), l01->size, l01->capacity );
    
    start = clock();
    print_vector(l01);
    over = clock();
    printf("[ Array_List_Print |  %1fms | Size: %d | Capacidade: %d ]\n", (over-start)/(CLOCKS_PER_SEC/1000.0), l01->size, l01->capacity );
    
    start = clock();
        x = array_list_get(l01, 2, &erro);
    over = clock();
    printf("[ Array_List_Get |  %1fms | Index: %d | Elemento: %d ]\n", (over-start)/(CLOCKS_PER_SEC/1000.0), 2, x );
    
    start = clock();        
        l01->size = array_list_pop_back(l01);
    over = clock();
    printf("[ Array_List_Pop_Back |  %1fms | Size: %d | Capacidade: %d ]\n", (over-start)/(CLOCKS_PER_SEC/1000.0), l01->size, l01->capacity );
    print_vector(l01);

    start = clock();
    if(array_list_find(l01, l01->capacity/2) != -1)
        printf("\nElemento presente no array_list\n");
    else 
        printf("\nElemento nao presente no array_list\n");
    over = clock();
    printf("[ Array_List_Find |  %1fms | Size: %d | Elemento: %d ]\n", (over-start)/(CLOCKS_PER_SEC/1000.0), l01->size, l01->capacity/2 );
    print_vector(l01);
    
    start = clock();
    l01->size = array_list_remove_from(l01, 0);
    over = clock();
    printf("[ Array_List_Remove_From |  %1fms | Size: %d | Index: %d ]\n", (over-start)/(CLOCKS_PER_SEC/1000.0),l01->size, 0);
    print_vector(l01);

    start = clock();
    array_list_insert_at(l01, 0, 300);
    over = clock();
    printf("[ Array_List_Insert_At |  %1fms | Index: %d | Elmento: %d ]\n", (over-start)/(CLOCKS_PER_SEC/1000.0), 0, 300);
    print_vector(l01);

    start = clock();
    array_list_destroy(l01); 
    over = clock();
    printf("[ Array_List_Destroy |  %1fms ]\n", (over-start)/(CLOCKS_PER_SEC/1000.0));
    
    start = clock();
    printf("[ Array_List_Size |  %1fms | Size: %d ]\n", (over-start)/(CLOCKS_PER_SEC/1000.0), array_list_size(l01));
    over = clock();

    start = clock();
    printf("[ Array_List_Destroy |  %1fms | Capacity: %d ]\n", (over-start)/(CLOCKS_PER_SEC/1000.0), array_list_capacity(l01));
    over = clock();
   

    return 0;
}
