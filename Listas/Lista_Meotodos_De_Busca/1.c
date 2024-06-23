#include <stdio.h>
#include <string.h>

#define MAX_CONVIDADOS 100
#define MAX_NOME 50

void lerListaConvidados(char lista[][MAX_NOME], int *n) {
    printf("Digite o número de convidados: ");
    scanf("%d", n);
    getchar(); 

    for (int i = 0; i < *n; i++) {
        printf("Digite o nome do convidado %d: ", i + 1);
        fgets(lista[i], MAX_NOME, stdin);
        lista[i][strcspn(lista[i], "\n")] = 0; 
    }
}

int pertence(char nome[], char lista[][MAX_NOME], int n) {
    int i, f, m;
    i = 0;
    f = n - 1;
    while (i <= f) {
        m = (i + f) / 2;
        int cmp = strcmp(nome, lista[m]);
        if (cmp == 0) return 1;
        if (cmp < 0) f = m - 1;
        else i = m + 1;
    }
    return 0;
}

int main() {
    char lista[MAX_CONVIDADOS][MAX_NOME];
    int n;
    char nome[MAX_NOME];

    lerListaConvidados(lista, &n);

    printf("Digite o nome da pessoa a ser verificada: ");
    fgets(nome, MAX_NOME, stdin);
    nome[strcspn(nome, "\n")] = 0; 

    
    qsort(lista, n, MAX_NOME, (int (*)(const void*, const void*)) strcmp);

    if (pertence(nome, lista, n)) {
        printf("%s está na lista de convidados.\n", nome);
    } else {
        printf("%s não está na lista de convidados.\n", nome);
    }

    return 0;
}
