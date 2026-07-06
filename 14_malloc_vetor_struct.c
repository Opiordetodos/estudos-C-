#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct aluno{
    char nome[40];
    float nota;
};
int main()
{
    int vetor_tamanho;
    int i;
    printf("Insira o numero de alunos que vc deseja cadastrar: ");
    scanf("%d", &vetor_tamanho);
    struct aluno *classe = malloc(vetor_tamanho * sizeof(struct aluno));
    if(classe == NULL){
    printf("Erro ao alocar memoria");
    return 1;
    }
    for(i = 0; i < vetor_tamanho; i++){
        printf("Insira o Nome do aluno: ");
        scanf("%s", classe[i].nome);
        printf("Insira a nota: ");
        scanf("%f", &classe[i].nota);
    }
    for(i = 0; i < vetor_tamanho; i++){
        printf("%s: %.2f \n", classe[i].nome, classe[i].nota);
    }
    free(classe);
    return 0;
}