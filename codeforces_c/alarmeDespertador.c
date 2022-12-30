#include <stdio.h>
 
int main () {
    int h1, h2, m1, m2, t1, t2;
 
    while (1) { //repete infinitamente
    	scanf ("%i %i %i %i", &h1, &m1, &h2, &m2);
    	
    	if (h1==0 && h2==0 && m1==0 && m2==0) { 
    		break; //para o while caso valores zero sejam fornecidos na entrada
    	}
        
        t1 = (h1 * 60) + m1;
        t2 = (h2 * 60) + m2;
         
        if (t1 < t2) {
        	printf ("%i\n", t2-t1);
        } else {
        	printf ("%i\n", 1440+(t2-t1)); //24*60 = 1440
        }
    }
 
    return 0;
}