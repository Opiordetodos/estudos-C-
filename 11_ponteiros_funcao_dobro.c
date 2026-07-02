//ponteiro 
#include <stdio.h>
#include <string.h>
void dobrar(int *p){
    *p = *p * 2;
}
int main(){
    int *ponteiro;
    int x = 10;
    ponteiro = &x;
    printf("O valor do ponteiro e: %d \n", x);
    dobrar(ponteiro);
    printf("o novo valor do ponteiro e: %d", x);
    return 0;
}