/*Faca um programa que receba um numero inteiro e verifique se este numero e par ou 
ımpar.*/

#include<stdio.h>
int main(){
    
    int N;

    printf("Digite um numero:\n");
    scanf("%d",&N);

    if(N % 2 == 0){
        printf("O numero eh par:%d",N);
    }else{
        printf("O numero eh impar:%d",N);
    }

    return 0;
}
