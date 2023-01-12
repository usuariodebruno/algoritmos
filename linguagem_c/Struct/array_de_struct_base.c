struct aluno{
    long long matricula;
    int notas[10]; //Atributos de struct podem ser array
    int pesos [10];
    int qtd_notas;
};


int main(){
    int i = 0, j = 0;
    struct aluno alunos[2];

    alunos[0].matricula = 10;
    alunos[0].qtd_notas = 3;
    alunos[0].notas[0] = 89; // pega a fita 

    
    // Laço para percorrer o array de struct de alunos 
    for(i = 0; i<2; ++i){ 
        printf("Aluno: %lld \n", alunos[i].matricula);
        printf("Notas: \n");
        // laço para percorrer as notas do aluno na posição i
        for (j=0; j<alunos[i].qtd_notas; ++j){ //
            printf("%d", alunos[i].notas[j]);
            printf("\n");
        }
    }


    return 0; // informar que o programa executou com sucesso
}


// COMO SÓ PREENCEMOS O INDICE 0 DOS ARRAYS, OS VALORES ALOCADOS FORAM ALEATORIOS 
// EXEMPLO: ALUNO[2].NOTA[0] = 1961981565 ---- COLOCANDO EM RISCO O FUNCIONAMENTO 
// ENTÃO, NECESSARIO ATENÇÃO NOS CONTROLE DE FLUXO  