#include <stdio.h>

struct aluno{
    long long matriculas;
    int notas[10]; int pesos[10]; 
    int qtd_notas;
};


// UM ARRAY É UM PONTEIRO, ENTÃO PARA LER DADOS, PODEMOS RECEBER O PONTEIRO 
// Nesse caso: alunos[] = *alunos
void ler_dados(int qtd, struct aluno *alunos){ 
    int i, j;
    for ( i = 0; i < qtd ; ++i){
        scanf("%lld", &alunos[i].matriculas);
        scanf("%d",&alunos[i].qtd_notas);
        for (j = 0; j < alunos[i].qtd_notas; ++j){
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
            printf ("%d %d",alunos[i].notas[j],alunos[j].pesos[j]);
        }
    printf(" }\n");
    }    
}

int media_aluno(struct aluno al){
    int i, soma_notas=0, soma_pesos=0;
    for (i = 0; i < al.qtd_notas; i++) {
        soma_notas += al.notas[i]*al.pesos[i];
        soma_pesos += al.pesos[i];
    }
    return soma_notas/soma_pesos;
}

int calcular_media_turma(int qtd,  struct aluno alunos[]){ //RECEBENDO AGORA COMO ARRAY
    int i, soma_notas=0;
    for (i = 0; i < qtd; i++){
        soma_notas+=media_aluno(alunos[i]);
    }
    return soma_notas/qtd;
}

int main(){
    int qtd_alunos;
    scanf("%d", &qtd_alunos);

    // struct de array 
    struct aluno alunos[qtd_alunos]; // struct tipo nome_variavel[quantidade]

    ler_dados(qtd_alunos, alunos); // alunos passará o endereço de memoria(ponteiro de alunos)
    mostrar_dados(qtd_alunos, alunos);
    printf("Media da turma %d\n",calcular_media_turma(qtd_alunos,alunos));

    return 0;
}