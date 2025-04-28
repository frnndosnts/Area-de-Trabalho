#include <stdio.h>

int main () {
//Movendo a Torre.
printf(" Movimentação da Peça Torre: \n");

    for (int i = 0; i < 5; i++)
    {
       printf("Direita  \n");
    }

//Movendo o Bispo.

int i = 0;

    printf(" Movimentação da Peça Bispo: \n");

    while (i < 5)
    {
        printf("Cima, Direita  \n");
        i++;
    }
    
//Movendo a Rainha.

int d = 1;

    printf(" Movimentação da Peça Rainha: \n");

    do {
        printf("Esquerda \n");
        d++;
    } while (d <= 8);

    return 0;
}