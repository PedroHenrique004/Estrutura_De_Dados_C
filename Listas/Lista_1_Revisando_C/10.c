#include <stdio.h>

int isPrimo(int n){

    if (n <= 1){
        return 0;
    };

    int i;

    for (i=2; i*i<=n; i++) {

        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int numero;

    printf("Digite o numero: ");
    scanf("%d", &numero);

    if(isPrimo(numero)) {
        printf("O numero eh primo\n");
    } else {
        printf("O numero nao eh primo\n");
    }

    return 0;
}