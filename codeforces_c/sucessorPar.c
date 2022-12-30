/* Sucessor Par */
 
#include <stdio.h>
 
 
int main()
{
    long int x; 
    scanf("%ld", &x);
    if (x%2 == 0){
        printf("%ld", x+2);
    }
    else{
        printf("%ld", x+1);
    }
    return 0;
}