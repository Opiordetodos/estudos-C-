//ponteiro 
#include <stdio.h>
#include <string.h>
void trocar(float *p, float *p1){
    float troca = *p1; //troca = 20
    *p1 = *p;
    *p = troca; 
}
int main(){
    float x = 10;
    float y = 20;
    float *ponteiro;
    float *ponteiro1;
    ponteiro = &x;
    ponteiro1 = &y;
    printf("O VALOR DE X e Y SÃO: %.2f, %.2f \n", x, y);
    trocar(ponteiro, ponteiro1);
    printf("O VALOR DE X e Y SÃO: %.2f, %.2f", x, y);
    
}