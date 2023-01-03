#include <stdio.h>

struct aluno{
    long long matriculas;
    int notas[10]; int pesos[10]; 
    int qtd_notas;
};


// UM ARRAY É UM PONTEIRO, ENTÃO PARA LER DADOS, PODEMOS RECEBER O PONTEIRO 
void ler_dados(int qtd, struct aluno *alunos){ 
    int i, j;
    for ( i = 0; i < qtd ; ++i){
        printf("Matricula de aluno\n");
        scanf("%lld", &alunos[i].matriculas);
        printf("Quantidade de notas\n");
        scanf("%d",&alunos[i].qtd_notas);
        for (j = 0; j < alunos[i].qtd_notas; ++j){
            printf("Nota | Peso\n");
            scanf ("%d %d", &alunos[i].notas[j], &alunos[j].pesos[j]);
        }        
    }    
}

void mostrar_dados(int qtd, struct aluno *alunos){
    int i, j;
    for ( i = 0; i < qtd; ++i){
        printf("%lld", alunos[i].matriculas); //não quebra linha 
        printf("%d = { ",alunos[i].qtd_notas);
        for (j = 0; j < alunos[i].qtd_notas; ++j){
            printf ("%d %d | ",alunos[i].notas[j],alunos[j].pesos[j]);
        }
    printf(" }\n");
    }    
}

int main(){
    int qtd_alunos;
    printf("Quantidade de aluno\n");
    scanf("%d", &qtd_alunos);
    struct aluno alunos[qtd_alunos]; // struct tipo nome_variavel[quantidade]
    ler_dados(qtd_alunos, alunos); // alunos passará o endereço de memoria(ponteiro de alunos)
    mostrar_dados(qtd_alunos, alunos);
    
    return 0;
}