#include <stdio.h>

int main(){

 //variáveis:   
  int nota1, nota2, nota3;
  float media;
  
  printf("***Calculo de média de notas***\n");

 //Cadastro das notas:
  printf("Digite a sua primeira nota:\n");
  scanf("%d", &nota1);
  printf("Digite a sua segunda nota:\n");
  scanf("%d", &nota2);
  printf("Digite a sua terceira nota:\n");
  scanf("%d", &nota3);

 //Média das notas utilizando operadores aritmeticos e conversão explicita(casting):
  media = (float) (nota1 + nota2 + nota3) /3;

 //Impressão do resultado:
 
   printf("A média é: %.2f\n", media);
  
  return 0;
}