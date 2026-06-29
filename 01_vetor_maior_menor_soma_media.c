#include <stdio.h>

int main()
{
    int number[10];
    int count;
    int best;
    int minun;
    int sum = 0;
    float media;

    // Leitura do vetor
    for(count = 0; count <= 9; count++){
        printf("Digite o %d numero: \n", count);
        scanf("%d", &number[count]);
    }
    best = number[0];
    minun = number[0];
    for(count = 0; count <= 9; count++){
        sum = sum + number[count];

        if(number[count] > best){
            best = number[count];
        }

        if(number[count] < minun){
            minun = number[count];
        }
    }

    media = (float) sum / 10;

    printf("O maior numero e: %d\n", best);
    printf("O menor numero e: %d\n", minun);
    printf("A soma dos numeros e: %d\n", sum);
    printf("A media dos numeros e: %.2f\n", media);

    return 0;
}