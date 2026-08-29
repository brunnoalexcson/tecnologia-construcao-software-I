#include <stdio.h>

int soma(int var1, int var2);

int main(){
    int var1, var2;
    printf("Digite o valor de var1: ");
    scanf("%d", &var1);

    printf("Digite o valor de var2: ");
    scanf("%d", &var2);

    int resultado = soma(var1, var2);

    printf("O resultado é: %d\n", resultado);

    return 0;
}

int soma(int var1, int var2){
    return var1 + var2;
}