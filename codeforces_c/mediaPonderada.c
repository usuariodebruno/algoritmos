/* Media Ponderada */
 
#include <stdio.h>
void calcularMediaPonderada(int nota1, int nota2){
    int media;
    
    nota1 = 2*nota1; nota2 = nota2*3;
    media = (nota1+nota2)/5;
    printf("%d", media);
}
 
 
int main()
{
    int n1, n2; 
    scanf("%d %d", &n1, &n2);
    calcularMediaPonderada(n1, n2);
    return 0;
}