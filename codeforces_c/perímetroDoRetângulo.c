/* 
 
ler os base e altura de um retangulo e mostrar seu perimetro 
 
*/
 
#include <stdio.h>
 
int main()
{
    long long base, altura; 
    scanf("%lli %lli", &base, &altura);
    long long perimetro = 2*(base+altura);
    printf("%lli",perimetro);
 
    return 0;
}