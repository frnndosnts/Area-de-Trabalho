#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int numeroJogador, numeroComputador, Resultado;
    char tipoComparacao

//Gerar número aleatório
    srand(time(0));
    numeroComputador = rand() % 100 + 1; //Número entre 1 e 100

//Início do Jogo
    printf("Bem-vindo ao Jogo Maior, Menor ou Igual!\n");
    printf("Você deve escolher um número e o tipo de comparação.\n");
    printf("M. Maior.\n");
    printf("N. Menor.\n");
    printf("I. Igual.\n");

    printf("Escolha a comparação: \n");
    scanf("%c", &tipoComparacao);

    printf("Digite seu número (Entre 1 e 100): \n");
    scanf("%d", &numeroJogador);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
       Resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;
    
     case 'N':
     case 'n':
        Resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;
    
    case 'I':
    case 'i':
        Resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;
    
    default:
       printf("Opção de jogo inválida!\n");
        break;
    }

    //Exibir o número do computador
    printf("O número do computador é: %d e o número do jogador é: %d\n" , numeroComputador, numeroJogador);

    if (Resultado == 1)
    {
        printf("Parabéns, você venceu!!\n");
    } else {
        printf("Que pena, você perdeu!!\n");
    }
  }