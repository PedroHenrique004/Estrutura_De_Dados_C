#include <stdio.h>

#define MAX_SIZE 100

int buscaComSentinela(int L[], int n, int x) {
    int i;
    L[n] = x;  

    for (i = 0; L[i] != x; i++);  

    if (i < n) return 1;  
    else return 0;      
}

int main() {
    int L[MAX_SIZE + 1]; 
    int n, x;

    printf("Digite o numero de elementos da lista: ");
    scanf("%d", &n);

    printf("Digite os elementos da lista:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &L[i]);
    }

    printf("Digite o elemento a ser procurado: ");
    scanf("%d", &x);

    if (buscaComSentinela(L, n, x)) {
        printf("Elemento %d encontrado na lista.\n", x);
    } else {
        printf("Elemento %d nao encontrado na lista.\n", x);
    }

    return 0;
}
