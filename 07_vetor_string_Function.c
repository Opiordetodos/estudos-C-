#include <stdio.h>
#include <string.h>
struct produto{
    float preco;
    char nome[30];
};
float precototal(struct produto prd[], int tam){
    float total = 0;
    int i;
    for(i = 0; i < tam; i++){
       total = prd[i].preco + total;
    }
    return total;
}
void maiscaro(struct produto prd[], int tam){
    float maior = prd[0].preco;
    char nomemaior[30];
    strcpy(nomemaior, prd[0].nome);
    int i;
    for(i = 0; i < tam; i++){
       if(maior < prd[i].preco){
            maior = prd[i].preco;
            strcpy(nomemaior, prd[i].nome);
       }
    }
    printf("O maior valor e: %.2f \n O nome do produto mais caro e: %s", maior, nomemaior);
}
int main()
{
    struct produto produtos[5];
    int i;
    int tama = 5;
    for(i = 0; i < tama; i++){
        printf("insira o nome do produto: \n");
        scanf("%s",produtos[i].nome);
        printf("insira o preço do produto: \n");
        scanf("%f", &produtos[i].preco);
    }
    printf("O preço total dos 5 produtos e %.2f: \n", precototal(produtos, tama));
    maiscaro(produtos, tama);
    

    return 0;
}
