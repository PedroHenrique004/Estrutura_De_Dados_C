#include <stdio.h>
#include <string.h>

typedef struct Pessoa {
    char nome[45];
    char telefone[21];
    int dia;
    int mes;
    int ano;
} AGENDA;

static AGENDA contato[5];

void salvaContato();

int main() {

    int ope;

    do {
        printf("\t Agenda pessoal \n \t 1 - Salvar Contato \n \t 2 - Alterar Contato \n \t 3 - Buscar Contato \n \t 4 - Apagar Contato \n \t 5 - Listar Contato \n \t 0 - Sair \n");
        scanf("%d", &ope);

        switch (ope){
            case 1:  
                salvaContato();
                break;

            case 2:  
                break;

            case 3:  
                break;

            case 4:  
                break;

            case 5:  

                for(int i = 0; i < 5; i++){
                    printf("\nO contato de %s possui %s e nasceu em %d/%d/%d\n", 
                    contato[i].nome,
                    contato[i].telefone,
                    contato[i].dia,
                    contato[i].mes,
                    contato[i].ano
                );
                }

                break;

            case 0:  
                break;

            default: 
                printf("Opção inválida!");
        }

    } while (ope >=1 && ope <= 5);

    return 0;
}


void salvaContato()
{
    char nome[45];
    char telefone[21];
    int dia, mes, ano;
    static int linha = 0;
    

    printf("Quais os dados do contato: \n");
    printf("Digite o nome: \n");
    scanf("%s", nome);
    printf("Digite o telefone: \n");
    scanf("%s", telefone);
    printf("Digite a data de nascimento: \n");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    strcpy(contato[linha].nome, nome);
    strcpy(contato[linha].telefone, telefone);
    contato[linha].dia = dia;
    contato[linha].mes = mes;
    contato[linha].ano = ano;
    printf("O contato de %s foi salvo com sucesso\n", nome);
    linha++;
}
