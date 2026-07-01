#include <stdio.h>
#include <string.h>
#define tamanho 50
struct alunos{
    char nome[30];
    float nota;
};
int variosaluno(struct alunos sala[], int tam){
    int count;
    int i; // para o for
    float notaverify;
    int qtdadded = 0;
    printf("insira o numero de alunos que deseja cadastrar: ");
    scanf("%d", &count);
    for(i = 0; i < count && i < tam; i++){
        printf("INSIRA O NOME DO ALUNO: ");
        scanf("%s", sala[i].nome);
        printf("INSIRA A NOTA DO ALUNO: ");
        scanf("%f", &notaverify);
        if(notaverify >= 0 && notaverify <= 10){
            sala[i].nota = notaverify;
            qtdadded++;
            printf("%d/%d ALUNOS CADASTRADOS COM SUCESSO \n ", qtdadded, count);
        }else{
            printf("Nota invalida.");
            break;
        }
    }

    return qtdadded;
}
void relatorio(struct alunos sala[], int tam){
    int i;
    float nota;
    float media = 0;
    float maiornota = sala[0].nota;
    float menornota = sala[0].nota;
    int aprovados = 0;
    int reprovados = 0;
    for(i = 0; i < tam; i++){
        media = sala[i].nota + media;
    }
    for(i = 0; i < tam; i++){
        if(maiornota < sala[i].nota){
            maiornota = sala[i].nota;
        }
    }
    for(i = 0; i < tam; i++){
        if(menornota > sala[i].nota){
            menornota = sala[i].nota;
        }
    }
    for(i = 0; i < tam; i++){
        nota = sala[i].nota;
        if(nota >= 6.0){
            aprovados++;
        }else{
            reprovados++;
        }
    }
    printf("A media da turma e: %.2f \n", media/tam);
    printf("A maior nota da sala e: %.2f \n", maiornota);
    printf("A menor nota da sala e: %.2f \n", menornota);
    printf("O NUMERO DE APROVADOS FOI: %d \n", aprovados);
    printf("O NUMERO DE REPROVADOS FOI: %d \n", reprovados);
}
int main()
{
    struct alunos classe[tamanho];
    int vectorused = 0;
    int selected;
    int selectedcase;
    float notaverify;
    int whileistrue = 1;
    int adicionados;
    do{
        printf("MENU \n 1 - CADASTRAR ALUNO \n 2 - RELATORIO DA TURMA \n 3 - SAIR \n");
        scanf("%d", &selected);
        switch(selected){
            case 1:
                printf("MENU DE CADASTRO \n 1 - APENAS 1 ALUNO \n 2 - VARIOS ALUNOS \n");
                scanf("%d", &selectedcase);
                switch(selectedcase){
                    case 1:
                        printf("INSIRA O NOME DO ALUNO: ");
                        scanf("%s", classe[vectorused].nome);
                        printf("INSIRA A NOTA DO ALUNO: ");
                        scanf("%f", &notaverify);
                        if(notaverify >= 0 && notaverify <= 10){
                            classe[vectorused].nota = notaverify;
                            vectorused++;
                            break;
                        }else{
                            printf("nota invalida\n");
                            break;
                        }
                        break;
                    case 2:
                        adicionados = variosaluno(classe, tamanho - vectorused);
                        vectorused = vectorused + adicionados;
                        break;
                    default:
                        printf("Opção invalida \n");
                        break;
                }
           break;
            case 2:
                relatorio(classe, vectorused);
                break;
            case 3:
                whileistrue = 3;
                break;
            default:
                printf("Opção invalida \n");
                break;
        }
    }while(whileistrue != 3);
}