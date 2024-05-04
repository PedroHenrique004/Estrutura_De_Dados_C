#include <stdio.h>

int showFatorial(int n){
    int soma = 1;

      for (int i = n; i >= 1; i--)
        {
            soma *= i;
        }
    
    return soma;

}

int main() {
    int numero;

    printf("Digite o numero: ");
    scanf("%d", &numero);

    int soma = showFatorial(numero);
    printf("O fatorial de %d eh %d\n", numero, soma);

    return 0;
}