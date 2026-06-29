#include <stdio.h>
int main()
{
    int i;
    float notas[10];
    int insu = 0;
    int reg = 0;
    int bom = 0;
    int exc = 0;
    float sumnotas = 0;
    for(i = 0; i < 10; i++){
        printf("Insira a nota: ");
        scanf("%f", &notas[i]);
        sumnotas = notas[i] + sumnotas;
    }
    for(i = 0; i < 10; i++){
        if(notas[i] <= 4.9){
            insu++;
        }else if(notas[i] <= 6.9){
            reg++;   
        }else if(notas[i] <= 8.9){
            bom++;
        }else{
            exc++;
        }
    }
    sumnotas = sumnotas/10;
    printf("O numero de alunos que ficara com notas insuficientes foram: %d \n", insu);
    printf("O numero de alunos que ficara com notas regulares foram: %d \n", reg);
    printf("O numero de alunos que ficara com notas boas foram: %d \n", bom);
    printf("O numero de alunos que ficara com notas excelentes foram: %d \n", exc);
    printf("A media da sala foi: %.2f \n", sumnotas);
    
    return 0;
}