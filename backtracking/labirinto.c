#include <stdio.h>

int lab_bt(char lab[20][20], int l, int c, int x, int y){
    /*Rejeita*/
    if (x<0 || y<0 || x>=c  || lab[y][x]!='B') return 0;
    /*Aceita*/
    if (x==c-1 && y==-1) return 1;   
} 


int main(){
    return 0;
}