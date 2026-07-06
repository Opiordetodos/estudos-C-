
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct produto{
    char nome[40];
    float preco;
};
void cadastrar(struct produto *prd, int tamanho){
    int i;
    for(i = 0; i < tamanho; i++){
        printf("Insira o nome do produto: ");
        scanf("%s", prd[i].nome);
        printf("Insira o preço: ");
        scanf("%f", &prd[i].preco);
    }
}
void editar_produto(struct produto *prd, int tamanho){
    int id;
    int _oq_editar = 0;
    int tem_certeza = 0;
    char nome_novo[40];
    float preco_novo = 0;
    printf("Insira o que você deseja editar: \n 1 - Nome \n 2 - Preço");
    scanf("%d", &_oq_editar);
    printf("Insira o ID que você deseja editar: ");
    scanf("%d", &id);
    if(id > tamanho && id >= 0){
        switch(_oq_editar){
        case 1: 
            printf("%s - ANTIGO NOME \n Novo nome: ", prd[id].nome);
            scanf("%s", nome_novo);
            if(nome_novo == prd[id].nome){
                printf("Nomes iguais");
            }else{
                prd[id].nome = nome_novo;
            }
            break;
        case 2: 
            printf("%f - ANTIGO PREÇO \n Novo nome: ", prd[id].preco);
            scanf("%f", &preco_novo);
            if(preco_novo == prd[id].preco){
                printf("preços iguais");
            }else{
                prd[id].preco = preco_novo;
            }
            break;
    }
    }else{
        printf("ID invalido");
    }
}
void exibir_produtos(struct produto *prd, int tamanho){
    int i;
    for(i = 0; i < tamanho; i++){
        printf("%s: %.2f \n", prd[i].nome, prd[i].preco);
    }
}
int main()
{
    int vetor_tamanho;
    printf("Insira a quantida de produtos a serem cadastradas: ");
    scanf("%d", &vetor_tamanho);
    struct produto *prod = malloc(vetor_tamanho * sizeof(struct produto));
    if(prod == NULL){
    printf("Erro ao alocar memoria");
    return 1;
    }
    cadastrar(prod, vetor_tamanho);
    int opcao;
    int whileistrue = 0;
    do{
        printf("MENU DO SITEMA DE MERCADO \n 1 - Listar produtos \n 2 - Atualizar produtos \n 3 - encerrar o programa.");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
               exibir_produtos(prod, vetor_tamanho);
               break;
            case 2: 
                editar_produto(prod, vetor_tamanho);
                break;
            case 3: 
                whileistrue = 1;
                break;
        }
    }while(whileistrue == 0);
    
    
    free(prod);
    return 0;
}
