/* 
 
ler dois flutuantes e mostra a media arimetica deles em C
 
*/
 
#include <stdio.h>
 
int main()
{
    float numero1, numero2; 
    scanf("%f %f", &numero1, &numero2);
    float media = (numero1+numero2)/2 ;
    printf("%f",media);
 
    return 0;
}