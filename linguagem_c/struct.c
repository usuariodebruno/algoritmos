#include <stdio.h>

//definição da STRUCT -uma CLASSE aproximadamente
struct data{ 
    short dia; // ATRIBUTOS DE UMA STRUCT 
    short mes; 
    int ano;
};

int main(){
    struct data hoje, amanha; //INSTANCIANDO DE DUAS STRUCTS (DATA hoje = new DATA) <- javacode

    //acessando atributos de uma struct 
    hoje.dia = 31;
    hoje.mes = 12;
    hoje.ano = 2022;

    amanha.dia = hoje.dia+1;
    amanha.mes = hoje.mes;
    amanha.ano = hoje.ano;

    //Exibindo atributos 
    printf("Data de Hoje: %hd:%hd:%d \n", hoje.dia, hoje.mes, hoje.ano );

    return 0;
}
