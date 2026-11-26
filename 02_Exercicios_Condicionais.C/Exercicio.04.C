/*Fac¸a um programa que leia um numero e, caso ele seja positivo, calcule e mostre: 
• O numero digitado ao quadrado 
• A raiz quadrada do numero digitado*/
#include<math.h>
#include<stdio.h>
int main(){
    int N,Q;
    double R;

    printf("Digite um numero:\n");
    scanf("%d",&N);

    if(N >= 0){
        R = sqrt(N);
        printf("Raiz quadrada: %.2f\n", R); 
        Q = N * N;
        printf("O numero ao quadrado fica:%d",Q);
    }else{
        printf("Erro... numero invalido");
    }

    return 0;
}