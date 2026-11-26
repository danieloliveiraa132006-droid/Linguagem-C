/*Leia um angulo em graus e apresente-o convertido em radianos. A formula de convers  ao e: R = G ∗ π/180, sendo G o angulo em graus e R em radianos e π = 3.14.*/
#include<stdio.h>
int main(){

    float G, R;
    printf("Digite um angulo em graus:\n");
    scanf("%f", &G);

    R = G * 3.14/180;

    printf("O angulo em radianos eh: %.2f\n", R);
    return 0;
}