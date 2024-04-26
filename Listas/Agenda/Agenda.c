#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct Pessoa {
    char nome[45];
    char telefone[21];
    char email[100];
    char tipo_telefone[20]; // celular, fixo, residência ou trabalho
    int dia;
    int mes;
    int ano;
} AGENDA;

static AGENDA contato[5];
static int qtd_contatos = 0; // Quantidade atual de contatos

void salvaContato();
void listaContatos();
void ordenaPorNome();
bool verificaNomeDuplicado(char *nome);

int main() {
    int ope;

    do {
        printf("\t Agenda pessoal \n");
        printf("\t Tamanho da agenda: %d \n", qtd_contatos);
        printf("\t 1 - Salvar Contato \n");
        printf("\t 2 - Alterar Contato \n");
        printf("\t 3 - Buscar Contato \n");
        printf("\t 4 - Apagar Contato \n");
        printf("\t 5 - Listar Contato \n");
        printf("\t 6 - Ordenar Contatos por Nome \n");
        printf("\t 0 - Sair \n");
        scanf("%d", &ope);

        switch (ope) {
            case 1:
                salvaContato();
                break;
            case 2: 
                alterarContato();
                break;
            case 3: 
                buscarContato();
                break;
            case 4: 
                apagarContato();
                break;
            case 5:
                listaContatos();
                break;
            case 6:
                ordenaPorNome();
                break;
            case 0:
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (ope != 0);

    return 0;
}

