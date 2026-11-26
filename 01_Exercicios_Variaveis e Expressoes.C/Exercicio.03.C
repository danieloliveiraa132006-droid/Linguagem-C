/*Peça ao usuario para digitar tres valores inteiros e imprima a soma deles*/
#include<stdio.h>
int main(){
    int n1, n2, n3, soma;

    printf("Digite 3 numeros:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    soma = n1 + n2 + n3;

    printf("A soma eh: %d",soma);

    return 0;
}

