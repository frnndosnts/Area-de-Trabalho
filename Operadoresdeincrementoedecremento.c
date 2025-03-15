#include <stdio.h>

 int main(){

/* Operadores de Incremento e Decremento:
Incremento (++)
Decremento (--)
Pré-incremento ++a
Pós-incremento a++
Pré-decremento --a
Pós-decremento a--
*/

  int numero1 =1,resultado;

 // numero1 = numero1 (1) + 1. 
  printf("Antes incremento: %d\n", numero1);
  numero1++;
  printf("Após incremento: %d\n", numero1);
    
// numero1 = numero1 (1) - 1.
  numero1--;
  printf("Após decremento: %d\n", numero1);

// soma e apresenta o resultado.
  resultado = ++numero1;
  printf("Após Pré-incremento - numero1: %d - Resultado: %d\n", numero1, resultado);

// soma o valor anterior e apresenta o resultado anterior.
  resultado = numero1++;
  printf("Após Pós-incremento - numero1: %d - Resultado: %d\n", numero1, resultado);


// diminui e apresenta o resultado.
  resultado = --numero1;
  printf("Após Pré-decremento - numero1: %d - Resultado: %d\n", numero1, resultado);

// diminui o valor anterior e apresenta o resultado anterior.
  resultado = numero1--;
  printf("Após Pós-decremento - numero1: %d - Resultado: %d\n", numero1, resultado);

 }

