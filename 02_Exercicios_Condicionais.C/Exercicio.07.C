/* Faca um programa que receba dois numeros e mostre o maior. Se por acaso, os dois 
numeros forem iguais, imprima a mensagem Numeros iguais.*/

#include<stdio.h>
int main(){

  int N1, N2;

    printf("Digite dois numeros:\n");
    scanf("%d %d",&N1, &N2);

    if(N1 > N2){
        printf("o maior numero eh:%d",N1);
    }
    else if(N2 > N1){
        printf("o maior numero eh:%d",N2);
    }
    else if(N1 == N2){
        printf("Os numeros sao iguais...");
    }
    return 0;
}