//ponteiro 
#include <stdio.h>
#include <string.h>
int main(){
    int x = 5;
    int *ponteiro;
    printf("O valor atual de X e: %d \n", x);
    ponteiro = &x;
    *ponteiro = 100;
    printf("O novo valor de X e: %d", x);
    return 0;
}