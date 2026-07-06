#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int vetor_tamanho;
    int i;
    printf("Insira quantos numero vc quer digitar: ");
    scanf("%d", &vetor_tamanho);
    int *number = malloc(vetor_tamanho * sizeof(int));
    for(i = 0; i < vetor_tamanho; i++){
        printf("Insira o valor que entrara no vetor: ");
        scanf("%d", &number[i]);
    }
    for(i = 0; i < vetor_tamanho; i++){
        printf("%d \n", number[i]);
    }
    free(number);
    return 0;
}