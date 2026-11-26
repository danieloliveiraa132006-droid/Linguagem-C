/*Leia um numero real e imprima o resultado do quadrado desse numero.*/
#include<stdio.h>
int main(){
   float n;
   float quadrado;

    printf("Digite um numero:\n");
    scanf("%f",&n);

    quadrado = n * n;

    printf("Esse numero ao quadrado fica: %.2f",quadrado);

    return 0;
}
