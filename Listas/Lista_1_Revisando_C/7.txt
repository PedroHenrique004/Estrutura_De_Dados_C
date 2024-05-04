#include <stdio.h>

int main() {
    int n, i, impar = 1, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        soma += impar;
        impar += 2;
    }

    printf("O quadrado de %d eh %d\n", n, soma);

    return 0;
}
