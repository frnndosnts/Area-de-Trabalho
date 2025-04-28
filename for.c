#include <stdio.h>

int main () {
//Movendo a Torre.
printf(" Movimentação da Peça Torre: \n");

    for (int i = 0; i < 5; i++)
    {
       printf("Direita  \n");
    }

//Movendo o Bispo.
printf("\n");
int i = 0;

    printf(" Movimentação da Peça Bispo: \n");

    while (i < 5)
    {
        printf("Cima, Direita  \n");
        i++;
    }
    
//Movendo a Rainha.
printf("\n");
int d = 1;
    printf(" Movimentação da Peça Rainha: \n");

    do {
        printf("Esquerda \n");
        d++;
    } while (d <= 8);

//Movendo o Cavalo.

    printf("\n");
    printf("Movimentação da peça Cavalo:  \n");

    for (int j = 1; j > 0; j--)
    {
        int k = 0;
       while (k <= 1)
       {
        printf("Baixo \n");
        k++;

       }
       
    printf("Esquerda  \n");
    printf("\n");
    }
    return 0;
}