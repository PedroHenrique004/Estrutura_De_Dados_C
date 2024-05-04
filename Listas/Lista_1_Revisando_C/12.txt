#include <stdio.h>

int fatorial(int n){
    if(n == 0)
        return 1;
    else

        // n é o numero de inicio e ele chama a função dentro dela até que n seja 0
        // sempre multiplicando e colocando o resultado em n

        return n * fatorial(n-1);
}

int main() {
    int numero;

    printf("Digite o numero: ");
    scanf("%d", &numero);

    int resultado = fatorial(numero);
    printf("O fatorial de %d eh %d\n", numero, resultado);

    return 0;
}
