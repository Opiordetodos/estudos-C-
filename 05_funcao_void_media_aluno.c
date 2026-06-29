#include <stdio.h>
void media(float a, float b, float c){
    float media = (a + b + c)/3;
    printf("a media do aluno Juninho e: %.2f", media);
}
int main()
{
    float x;
    float y;
    float z;
    printf("Insira as 3 notas do Juninho: ");
    scanf("%f %f %f", &x, &y, &z);
    media(x,y,z);
    return 0;
}