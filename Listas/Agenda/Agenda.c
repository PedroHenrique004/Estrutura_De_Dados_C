#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "agenda.h"
#include "funcoes.c"

AGENDA contato[5];
int qtd_contatos = 0; 

void salvaContato();
void alterarContato();
void buscarContato();
void apagarContato();
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
