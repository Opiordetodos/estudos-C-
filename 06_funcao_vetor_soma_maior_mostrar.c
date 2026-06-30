
#include <stdio.h>
float somarvetor(float numbervector[], int tamanho){
    float soma = 0;
    int i;
    for(i = 0; i < tamanho; i++){
        soma = soma + numbervector[i];
    }
    return soma;
}
float maiorvetor(float numbervector[], int tamanho){
    float maior = numbervector[0];
    int i;
    for(i = 0; i < tamanho; i++){
        if(maior < numbervector[i]){
            maior = numbervector[i];
        }
    }
    return maior;
}
void mostrarvetor(float numbervector[], int tamanho){
    int i;
    for(i = 0; i < tamanho; i++){
        printf("O valor do vetor no indice %d e: %.2f \n", i, numbervector[i]);
    }
}

int main()
{
    float numeros[6];
    int tam = 6;
    int fori;
    for(fori = 0; fori < tam; fori++){
        printf("insira os valores para o vetor: \n");
        scanf("%f", &numeros[fori]);
    }
    mostrarvetor(numeros, tam);
    printf("o maior numero do vetor e: %.2f \n", maiorvetor(numeros, tam));
    printf("a soma dos numeros do vetor e: %.2f", somarvetor(numeros, tam));

    return 0;
}