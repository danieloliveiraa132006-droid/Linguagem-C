/*Leia um numero fornecido pelo usuario. Se esse numero for positivo, calcule a raiz 
quadrada do numero. Se o numero for negativo, mostre uma mensagem dizendo que o 
numero e invalido. */
#include<stdio.h>
#include<math.h>

int main(){
  int N;
  double R;
    printf("Digite um numero:\n");
    scanf("%d",&N);

    if(N >= 0){
        R = sqrt(N);
        printf("Raiz quadrada: %.2f\n", R); 
    }else{
        printf("Erro...");
    }

    return 0;
}