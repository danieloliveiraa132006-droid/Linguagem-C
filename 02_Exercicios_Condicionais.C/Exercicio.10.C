/*Faca um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
peso ideal, utilizando as seguintes formulas (onde  h corresponde a altura): `
• Homens: (72.7 ∗ h) − 58
• Mulheres: (62, 1 ∗ h) − 44, 7*/
#include<stdio.h>
int main(){
  float H, peso_idealM, peso_ideiaF;
  char S , M, F;

    printf("Digite sua altura(m):\n");
    scanf("%f",&H);

    printf("Digite seu sexo(M/F):\n");
    scanf(" %c",&S);

    if(S == 'M' || S == 'm'){
       peso_idealM = (72.7 * H) - 58; 
        printf("Seu peso ideal eh de:%.2f",peso_idealM);
    }
    else if(S == 'F' || S == 'f'){
       peso_ideiaF =  (62.1 * H) - 44.7;
        printf("Seu peso ideal eh de:%.2f",peso_ideiaF); 
    }

    return 0;
}