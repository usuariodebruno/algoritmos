 
#include <stdio.h>
void contartempo(int duracao){
    signed short int minutos;
    int horas = 0;
    
    while (duracao >= 60){
        duracao = duracao-60;
        horas = horas+1;
    }
    minutos = duracao;
    printf("%02d:%u", horas, minutos);
}
 
 
int main()
{
    int inicio, fim, duracao; 
    scanf("%d %d", &inicio, &fim);
    duracao = fim-inicio;
    contartempo(duracao);
    return 0;
}