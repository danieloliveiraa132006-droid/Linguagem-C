/*Leia um numero real. Se o numero for positivo imprima a raiz quadrada. Do contrario,
imprima o numero ao quadrado*/
#include<stdio.h>
#include<math.h>
int main(){
   int N,Q;
   double R;

    printf("Digite um Numero:\n");
    scanf("%d",&N);

    if(N >= 0){
        R = sqrt(N);
        printf("Raiz quadrada: %.2f\n", R); 
    }else{
        Q = N * N;
        printf("O numero ao quadrado fica:%d",Q);
    }
    return 0;
}