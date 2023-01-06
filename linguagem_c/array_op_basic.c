#include <stdio.h>


/*
    Adiciona um inteiro ao final do vector
    Retorna o novo tamanho do vector
*/
int append_int(int a[], int size, int capacity, int value){
    if (size == capacity) //Verificação de memoria 
        return size;
    a[size] = value; // tamanho será o prixomo depois do ultimo (size-1)
    return ++size;
}

/*
    Adiciona um inteiro ao um index do vector
    Retorna o novo tamanho do vector
*/

int insert_int(int a[], int size, int capacity, int value, int index){
    if (size == capacity){ //Verificação de memoria 
        return size;
    }
    int i;
    size++; //Aumenta vector antes de adicionar novo elementoo
    for ( i = size; i > index; --i){ // começo do fim; do ultimo ao index; declementando  
        a[i] = a[i-1]; // Deslocamento dos elementos pro indece anterio s
    }
    a[index] = value; // Adiciona o value no vector[index]
    return size;
}


/*
    Imprime todas as elemento do vector
*/
void print_vector(int a[], int size, int capacity ){  // FAZER VERIFICAÇÃO SE O TAMANHO DO VALOR PASSAR <= CAPACITY
    printf(" {");
    int i;
    for ( i = 0; i < size; ++i) {
        printf("%d", a[i]);
    }
    printf(" }\n");
    
}

int main(){
    int i, size = 0, capacity = 10000; 
    int a[capacity];
    for ( i = 0; i < 10; i++){
        size = append_int(a, size, capacity, i+5);
    }
    print_vector(a, size, capacity);
    size = insert_int(a, size, capacity, 7, 3);
    print_vector(a, size, capacity);
    return 0;
}