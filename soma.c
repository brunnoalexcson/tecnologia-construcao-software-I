#include <stdio.h>

void soma(int var1, int var2);

int main(){
    int var1, var21;
    printf("Digite o valor de var1: ")
    scanf("%d", &d);

    printf("Digite o valor de var2: ");
    scanf("%d", &var2);

    int resultado = soma(var1, var2);

    printf("O resultado é: %d\n", resultado);

    return ;
}

void soma(int var1, int var2){
    return var1 + var2;
}