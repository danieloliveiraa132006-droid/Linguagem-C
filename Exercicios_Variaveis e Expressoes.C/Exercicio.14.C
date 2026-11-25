/*Leia um valor de comprimento em polegadas e apresente-o convertido em centımetros.
A formula de conversao e: C = P ∗ 2, 54, sendo C o comprimento em cent´ımetros e P o
comprimento em polegadas.*/
#include<stdio.h>
int main(){
   float P, C;
   printf("Digite um comprimento em polegadas:\n");
   scanf("%f", &P);

   C = P * 2.54;

    printf("O comprimento em centimetros eh: %.2f\n", C);

    return 0;
}