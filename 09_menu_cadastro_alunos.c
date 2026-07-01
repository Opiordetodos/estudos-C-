#include <stdio.h>
#include <string.h>
#define tamanho 5
struct alunos{
    char nome[30];
    float nota;
};
void listaralunos(struct alunos sala[], int tam){
    int i;
    for(i = 0; i < tam; i++){
        printf("ID: %d \n NOME: %s \n NOTA: %.2f \n", i, sala[i].nome, sala[i].nota);
    }
}

int main()
{
    int whileistrue = 1;
    struct alunos classe[tamanho];
    int count = 0;
    int selected;
    do{
        printf("MENU \n 1: CADASTRA ALUNOS\n 2: LISTAR ALUNOS\n 0: ENCERRAR PROGRAMA\n QUAL OPÇÃO DESEJA USAR: ");
        scanf("%d", &selected);
        switch(selected){
            case 1:
                if(count < tamanho){
                    printf("INSIRA O NOME DO ALUNO: ");
                    scanf("%s", classe[count].nome);
                    printf("INSIRA A NOTA DO ALUNO: ");
                    scanf("%f", &classe[count].nota);
                    count++;
                }else{
                    printf("Numero maximo de alunos alcançados");
                }
            break;
            case 2:
                listaralunos(classe, count);
            break;
            
            case 0:
                whileistrue = 0;
                break;
        }
    }while(whileistrue != 0);
    printf("programa encerrado");

    return 0;
}