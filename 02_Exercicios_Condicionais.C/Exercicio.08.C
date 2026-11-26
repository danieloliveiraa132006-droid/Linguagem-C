/*Faca um programa que leia 2 notas de um aluno, verifique se as notas sao validas e 
exiba na tela a media destas notas. Uma nota valida deve ser, obrigatoriamente, um 
valor entre 0.0 e 10.0, onde caso a nota nao possua um valor valido, este fato deve ser
informado ao usuario e o programa termina*/
#include<stdio.h>
int main(){
    float Nota1, Nota2;

    printf("Digite as duas notas:\n");
    scanf("%f %f",&Nota1, &Nota2);

    if(Nota1 >= 0.0 && Nota1 <= 10.0){
     if(Nota2 >= 0.0 && Nota2 <= 10.0){
       printf("As notas digitadas foram:%.2f %.2f",Nota1, Nota2);
     }         
    }else{
        printf("Nota invalida...");
    }
  return 0;
}