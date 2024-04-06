#include <stdio.h>

int fibo(int n);

int main() {
  int num, i;

  printf("Entre com um número: ");
  scanf("%d", &num);

  printf("%d => %d\n", 1, fibo(1));

  for(i = 1; i <= num - 1 ; i++){
    printf("%d => %d\n", (i+1), fibo(i));
  }
}

// Função recursiva
int fibo (int n){
  if (n <= 1) {
    return 1;
  }
  else {
    // fibo (posicao) -> ele recebe a posição

    // a função faz o calculo mas o fibo (como função faz a soma)
    return fibo(n - 1) + fibo(n - 2);;
  }
};