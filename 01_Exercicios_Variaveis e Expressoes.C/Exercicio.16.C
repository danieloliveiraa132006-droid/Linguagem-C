/*Leia um valor de massa em quilogramas e apresente-o convertido em libras. A formula 
de conversao e: L = K/ 0.45 , sendo K a massa em quilogramas e L a massa em libras.
*/
#include<stdio.h>
int main(){
   float K, L;
    printf("Digite uma massa em quilogramas:\n");
    scanf("%f", &K);

    L = K / 0.45;

    printf("A massa em libras eh: %.2f\n", L);

    return 0;
}