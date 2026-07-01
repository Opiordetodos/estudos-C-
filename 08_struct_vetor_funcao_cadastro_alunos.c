#include <stdio.h>
#include <string.h>
struct alunos{
  char nome[30];
  float nota;
};
float mediageral(struct alunos classe[], int tamanho){
    int i;
    float media = 0;
    for(i = 0; i < tamanho; i++){
        media = classe[i].nota + media;
    }
    return media/tamanho;
}
void aprovados(struct alunos classe[], int tamanho){
    int i; 
    for(i = 0; i < tamanho; i++){
        if(classe[i].nota >= 6){
            printf(" O Aluno %s foi aprovado \n", classe[i].nome);
        }
    }
    
}
int main()
{
    struct alunos turma[5];
    int i;
    for(i = 0; i < 5; i++){
        printf("Insira o nome do alunos: ");
        scanf("%s", turma[i].nome);
        printf("Insira a nota do aluno: ");
        scanf("%f", &turma[i].nota);
    }
    printf("A media geral da turma e: %.2f \n", mediageral(turma, 5));
    aprovados(turma, 5);
    
    return 0;
}