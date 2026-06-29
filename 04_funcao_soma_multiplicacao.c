#include <stdio.h>
float soma(float a, float b){
    float soma;
    
    soma = a + b;
    return soma;
}
float multiplicacao(float a, float b){
    float mult;
    
    mult = a * b;
    return mult;
}
int main()
{
    float x;
    float y;
    float res;
    printf("insira os valores de X e Y para somarmos e multiplicarmos: \n");
    scanf("%f %f", &x, &y);
    res  = soma(x,y);
    printf("O resultado da soma e: %.2f \n", res);
    res  = multiplicacao(x,y);
    printf("O resultado da multiplicacao e: %.2f \n", res);
    return 0;
}