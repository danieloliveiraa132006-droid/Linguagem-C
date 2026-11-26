/*Leia o salario de um trabalhador e o valor da prestacao de um emprestimo. Se a
prestacao for maior que 20% do salario imprima: Emprestimo nao concedido, caso
contrario imprima: Emprestimo concedido.*/
#include<stdio.h>
int main(){
    float S ,PorC, Prestacao ;

    printf("Digite seu salario:\n");
    scanf("%f",&S);

    PorC = S - (S * 20 / 100);

    printf("Digite a prestacao:\n");
    scanf("%f",&Prestacao);

    if(Prestacao > PorC){
        printf("Emprestimo nao concedido.");
    }else{
        printf("Emprestimo concedido.");
    }
    return 0;
}