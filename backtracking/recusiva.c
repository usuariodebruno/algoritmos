/* Faça uma função recursiva que calcule e retorne o fatorial de um número inteiro N. */

#include <stdio.h>


int fatorial(int n) {
    int resultado = 0;
	if (n  ==  0 ){
		return 1;
	} else {
        resultado = n * fatorial(n - 1);
        printf("%d = %d * %d  \n", resultado , n, n-1);
    }
	return resultado;
}

int main(){
    int fat = 0; 
    fat = fatorial(5);    
    printf("fatorial: %d", fat);      
    return 0;
}