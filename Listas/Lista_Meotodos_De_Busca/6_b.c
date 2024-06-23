#include <stdio.h>

#define NUM_NUMEROS 15

void cadastrarNumeros(int numeros[], int n) {
    int num, repetido;
    for (int i = 0; i < n; i++) {
        do {
            repetido = 0;
            printf("Digite o numero %d: ", i + 1);
            scanf("%d", &num);
            for (int j = 0; j < i; j++) {
                if (numeros[j] == num) {
                    repetido = 1;
                    printf("Numero ja cadastrado! Digite um numero diferente.\n");
                    break;
                }
            }
        } while (repetido);
        numeros[i] = num;
    }
}

void bubbleSort(int numeros[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
}

int buscaBinaria(int numeros[], int n, int x, int *comparacoes) {
    int i = 0, f = n - 1;
    while (i <= f) {
        int m = (i + f) / 2;
        (*comparacoes)++;
        if (numeros[m] == x) {
            return m;
        }
        (*comparacoes)++;
        if (numeros[m] < x) {
            i = m + 1;
        } else {
            f = m - 1;
        }
    }
    return -1;
}

int main() {
    int numeros[NUM_NUMEROS];
    int num, comparacoes;
    int posicao;

    cadastrarNumeros(numeros, NUM_NUMEROS);

    bubbleSort(numeros, NUM_NUMEROS);

    printf("Digite o numero a ser procurado: ");
    scanf("%d", &num);

    comparacoes = 0;
    posicao = buscaBinaria(numeros, NUM_NUMEROS, num, &comparacoes);
    if (posicao != -1) {
        printf("Numero encontrado na posicao %d usando busca binaria com %d comparacoes.\n", posicao, comparacoes);
        if (posicao % 2 == 0) {
            printf("A posicao e par.\n");
        } else {
            printf("A posicao e impar.\n");
        }
    } else {
        printf("Numero nao encontrado usando busca binaria com %d comparacoes.\n", comparacoes);
    }

    return 0;
}
