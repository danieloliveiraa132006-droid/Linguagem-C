/*Leia um valor de area em acres e apresente-o convertido em metros quadrados  m2
. A formula de conversao e: M = A ∗ 4048, 58, sendo M a area em metros quadrados e A a area em acres.*/
#include<stdio.h>
int main(){
    float A, M;

        printf("Digite sua area em acres:\n");
        scanf("%f", &A);

        M = A * 4048.58;

        printf("Sua area em metros quadrados sera: %.2f m2\n",M);

        return 0;
}