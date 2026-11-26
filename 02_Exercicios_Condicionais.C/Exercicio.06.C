/*Escreva um programa que, dados dois numeros inteiros, mostre na tela o maior deles, ´
assim como a diferenca existente entre ambos*/
#include<stdio.h>
int main(){
    int N1, N2,D;
   
    printf("Digite dois numeros:\n");
    scanf("%d %d", &N1, &N2);

    if(N1 > N2){
        D = N1 - N2;
        printf("O maior eh:%d\n",N1);
        printf("A diferenca eh de:%d\n",D);
    }else{
        D = N2 - N1;
        printf("O maior eh:%d\n",N2);
        printf("A diferenca eh de:%d\n",D);
    }
    return 0;
}