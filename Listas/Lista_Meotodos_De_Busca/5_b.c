#include <stdio.h>
#include <string.h>

#define NUM_PRODUTOS 12
#define MAX_DESC 100

typedef struct {
    int codigo;
    char descricao[MAX_DESC];
    float preco;
} Produto;

void cadastrarProdutos(Produto produtos[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Cadastro do produto %d\n", i + 1);
        printf("Digite o codigo: ");
        scanf("%d", &produtos[i].codigo);
        printf("Digite a descricao: ");
        getchar(); 
        fgets(produtos[i].descricao, MAX_DESC, stdin);
        produtos[i].descricao[strcspn(produtos[i].descricao, "\n")] = 0; 
        printf("Digite o preco: ");
        scanf("%f", &produtos[i].preco);
        printf("\n");
    }
}

void bubbleSort(Produto produtos[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (produtos[j].codigo > produtos[j+1].codigo) {
                Produto temp = produtos[j];
                produtos[j] = produtos[j+1];
                produtos[j+1] = temp;
            }
        }
    }
}

int buscaBinaria(Produto produtos[], int n, int codigo, int *comparacoes) {
    int i = 0, f = n - 1;
    while (i <= f) {
        int m = (i + f) / 2;
        (*comparacoes)++;
        if (produtos[m].codigo == codigo) {
            return m;
        }
        (*comparacoes)++;
        if (produtos[m].codigo < codigo) {
            i = m + 1;
        } else {
            f = m - 1;
        }
    }
    return -1;
}

int main() {
    Produto produtos[NUM_PRODUTOS];
    int codigo, comparacoes;
    int posicao;

    cadastrarProdutos(produtos, NUM_PRODUTOS);
    
    bubbleSort(produtos, NUM_PRODUTOS);

    printf("Digite o codigo do produto a ser procurado: ");
    scanf("%d", &codigo);

    comparacoes = 0;
    posicao = buscaBinaria(produtos, NUM_PRODUTOS, codigo, &comparacoes);
    if (posicao != -1) {
        printf("Produto encontrado na posicao %d usando busca binaria com %d comparacoes.\n", posicao, comparacoes);
    } else {
        printf("Produto nao encontrado usando busca binaria com %d comparacoes.\n", comparacoes);
    }

    return 0;
}
