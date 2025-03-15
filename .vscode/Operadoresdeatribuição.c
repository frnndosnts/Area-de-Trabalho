#include <stdio.h>

int main(){

/*Operadores de atribuição:
Atribuição simples (=)
Atribuição com soma (+=)
Atribuição com subtração (-=)
Atribuição com multiplicação (*=)
Atribuição com divisão (/=)
*/

  int numero1 = 10, numero2 = 2, resultado;
  resultado = 10;
  printf("Resultado: %d\n", resultado);

// resultado = resultado anterior + 20.
  resultado += 20;
  printf("Resultado: %d\n", resultado);

// resultado = resultado anterior - numero1 (10).
  resultado -= numero1;
  printf("Resultado: %d\n", resultado);

// resultado = resultado anterior * 4.
  resultado *= 4;
  printf("Resultado: %d\n", resultado);

// resultado = resultado anterior / numero2 (2).
  resultado /= numero2;
  printf("Resultado: %d\n", resultado);

}
