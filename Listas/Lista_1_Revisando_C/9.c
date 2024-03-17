#include <stdio.h>

int main() {
    int conta, numero, soma = 0, resultado;

    printf("Digite o numero da conta: ");
    scanf("%d", &numero);

    conta = numero;

    // Soma = 4137 % 10 = 7
    // conta = 4137 / 10 = 413 (Em divisões inteiras os decimais são descartados)

    // Soma = 413 % 10 = 3
    // conta = 413 / 10 = 41

    // Soma = 41 % 10 = 1
    // conta = 41 / 10 = 4

    // Soma = 4 % 10 = 4
    // conta = 4 / 10 = 0

    // 7 + 3 + 1 + 4 = 15

    while(conta > 0) {
        soma += conta % 10;
        conta /= 10;
    }

    resultado = soma % 10;  

    printf("Numero da conta completo: %d-%d", numero, resultado);

    return 0;
}
