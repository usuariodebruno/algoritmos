#include <stdio.h>
#include <stdlib.h>
int repeticoes(int numero, int numeros){
    int i, ocorrencia = 0;
    float v[numeros];

    if (numeros < 0 ) {
        return -1;
    }else {
        for (i = 0; i < numero-1 ; i++){
            v[i] = numero % 10;
            printf("%d", v[i]);  
            numero         
        }    

        for (i = 0; i < numero-1 ; i++){
            if (v[i] == numero) {
                printf("sim");
                ocorrencia++;
            } 
        }
        return ocorrencia;
    }
}

int main(){
    int qtd;
    qtd =  repeticoes(4, 134125634);
    printf("%d", qtd);
    return 0;
}