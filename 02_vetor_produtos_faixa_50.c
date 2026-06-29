#include <stdio.h>
int main()
{
    float precos[8];
    int i;
    int maiorque50 = 0;
    int menorque50 = 0;
    float maiscaro = 0;
    float total = 0;
    for(i = 0; i < 8; i++){
        printf("digite o valor dos 8 produtos: ");
        scanf("%f", &precos[i]);
    }
    for(i = 0; i < 8; i++){
        total = total + precos[i];
        if(precos[i] > 50){
            maiorque50++;
            if(precos[i] > maiscaro){
                maiscaro = precos[i];
            }
        }else{
            menorque50++;
            if(precos[i] > maiscaro){
                maiscaro = precos[i];
            }
        }
    }
    printf("O numero de produtos maiores que 50 e: %d \n", maiorque50);
    printf("O numero de produtos menores que 50 e: %d \n", menorque50);
    printf("O produto mais caro e: %.2f \n", maiscaro);
    printf("O valor total do estoque e: %.2f \n", total);
    return 0;
}
