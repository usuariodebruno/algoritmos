#include <stdio.h>

int main(){
      int a = 1, b =2, c= 3, d=4, e=5, f=6, g=7, h=8, i=9;
      int *ponteiro;
    ponteiro = &e;
      printf("&a=%p\n",&a);
      printf("&b=%p\n",&b);
      printf("&c=%p\n",&c);
      printf("&d=%p\n",&d);
      printf("&e=%p\n",&e);
      printf("&f=%p\n",&f);
      printf("&g=%p\n",&g);
      printf("&h=%p\n",&h);
      printf("&i=%p\n",&i);
      printf(" p=%p\n",ponteiro);
    ponteiro++;
      printf("&a=%p\n",&a);
      printf("&b=%p\n",&b);
      printf("&c=%p\n",&c);
      printf("&d=%p\n",&d);
      printf("&e=%p\n",&e);
      printf("&f=%p\n",&f);
      printf("&g=%p\n",&g);
      printf("&h=%p\n",&h);
      printf("&i=%p\n",&i);
      printf(" p=%p\n",ponteiro);
    *ponteiro = 50;

    printf ("a,b,c,d,e,f,g,h,i = %d, %d, %d, %d, %d, %d, %d, %d, %d", a,b,c,d,e,f,g,h,i);
    return 0;
}