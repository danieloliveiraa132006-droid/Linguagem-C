/*Faca um programa que receba dois numeros e mostre qual deles e o maior.*/
#include<stdio.h>
int main(){
  int N1, N2;
    printf("Digite dois numeros:\n");
    scanf("%d %d", &N1, &N2);

    if(N1 > N2){
        printf("O numero maior eh: %d",N1);
    }
    else{
        printf("O numero maior eh: %d", N2);
    }

    return 0;
}