#include <stdio.h>

int main(void) {

   long atual, anterior, count, soma;

   printf("Digite quantos números quer ver da sequência de fibonnaci: ");

   scanf("%ld", &count);
   atual = 1;
   anterior = 1;
   soma =0;

  if (count == 1) {
    printf("1");
  }
  else if (count == 2) {
    printf("1 1");
  }
  else {
    printf("%ld ", atual);
    printf("%ld ", anterior);

     for(int i = 3; i <= count; i++){

          soma = atual + anterior;
          anterior = atual;
          atual = soma;

          printf("%ld ", soma);
     }
  }


  return 0;
}