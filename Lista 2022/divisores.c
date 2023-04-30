/* Divisores */
 
#include <stdio.h>
 
int main()
{
    long int numero;
    int cont;
    scanf("%ld", &numero);
    
    for(cont = 1; numero>=cont; cont++){
        if (numero%cont == 0){
            printf("%d ", cont);
        }
    }
 
    return 0;
}
 