/*Leia um numero inteiro e imprima o seu antecessor e o seu sucessor.*/
#include<stdio.h>
int main(){
    int N, sucessor, antecessor;

      printf("Digite um numero inteiro:\n");
      scanf("%d", &N);

        sucessor = N + 1;
        antecessor = N - 1;

        printf("O antecessor do numero digitado e: %d\n",antecessor);
        printf("O sucessor do numero digitado e: %d\n",sucessor);

    return 0;
}