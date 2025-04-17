#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int escolhaoJogador, escolhaComputador;
  srand(time(0));

  printf("Jogo de Jokenpô!\n");
  printf("Escolha uma opção:\n");
  printf("1. Pedra\n");
  printf("2. Papel\n");
  printf("3. Tesoura\n");
  printf("Escolha: \n");
  scanf("%d", &escolhaoJogador);

  escolhaComputador = rand() % 3 + 1;

  switch (escolhaoJogador)
  {
  case 1:
    printf("Jogador: Pedra - ");
    break;
  
    case 2:
    printf("Jogador: Papel - ");
    break;  
    
    case 3:
    printf("Jogador: Tesoura - ");
    break;

  default:
  printf("Opção inválida!\n");
    break;
  }

  switch (escolhaComputador)
  {
  case 1:
    printf("Computador: Pedra\n");
    break;
  
    case 2:
    printf("Computador: Papel\n");
    break;  
    
    case 3:
    printf("Computador: Tesoura\n");
    break;

  }

  if (escolhaoJogador == escolhaComputador)
  {
    printf("Empate!!!");
    
  } else if ((escolhaoJogador == 1) && (escolhaComputador == 3) ||
             (escolhaoJogador == 2) && (escolhaComputador == 1) ||
             (escolhaoJogador == 3) && (escolhaComputador == 2))
  { 
     printf ("Parabéns! Você ganhou!!!\n");

  } else {
     printf ("Você Perdeu!!\n");
  }

  return 0;
}