#include<stdio.h> 
#include <stdbool.h>

int main() {
    int a, b;
    bool logico;
    scanf("%d %d", &a, &b);
    for (int i = 0; i < b; i++) {
        if (a%10 == b%10){
            a= a/10; b = b/10;
            logico = true;
        } else {
            logico = false;
        }

    }

    if (logico == true) {
        printf("encaixa");
    } else {
        printf("nao encaixa");
    }
    
    
    return 0;
}