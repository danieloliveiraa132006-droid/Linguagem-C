/*Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
• o total a pagar com desconto de 10%;
• o valor de cada parcela, no parcelamento de 3× sem juros;
• a comissao do vendedor, no caso da venda ser a vista (5% sobre o valor com des- ˜
conto)
• a comissao do vendedor, no caso da venda ser parcelada (5% sobre o valor total)*/
#include<stdio.h>
int main(){
    float V_T, V_D, P, C_V_A, C_V_P;

    printf("Digite o valor total da venda:\n");
    scanf("%f", &V_T);

    V_D = V_T - (V_T * 0.10);
    P = V_T / 3;
    C_V_A = V_D * 0.05;
    C_V_P = V_T * 0.05;

    printf("Total a pagar com desconto de 10%%: %.2f\n", V_D);
    printf("Valor de cada parcela (3x sem juros): %.2f\n", P);
    printf("Comissão do vendedor (venda à vista): %.2f\n", C_V_A);
    printf("Comissão do vendedor (venda parcelada): %.2f\n", C_V_P);

    return 0;
}