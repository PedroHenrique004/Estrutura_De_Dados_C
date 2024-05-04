#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "agenda.h"

bool verificaNomeDuplicado(char *nome);

void salvaContato() {
    if (qtd_contatos >= 5) {
        printf("Agenda cheia!\n");
        return;
    }

    AGENDA novo_contato;
    printf("Quais os dados do contato: \n");
    printf("Digite o nome: \n");
    scanf("%s", novo_contato.nome);
    if (verificaNomeDuplicado(novo_contato.nome)) {
        printf("Erro: Já existe um contato com esse nome!\n");
        return;
    }
    printf("Digite o tipo de telefone (celular, fixo, residência, trabalho): \n");
    scanf("%s", novo_contato.tipo_telefone);
    printf("Digite o telefone: \n");
    scanf("%s", novo_contato.telefone);
    printf("Digite o email: \n");
    scanf("%s", novo_contato.email);
    printf("Digite a data de nascimento (dd mm aaaa): \n");
    scanf("%d %d %d", &novo_contato.dia, &novo_contato.mes, &novo_contato.ano);

    contato[qtd_contatos] = novo_contato;
    qtd_contatos++;
    printf("O contato de %s foi salvo com sucesso\n", novo_contato.nome);
}


void alterarContato() {
    int posicao;
    char opcao[2];
    char novo_valor[100];

    printf("Digite a posição do contato que deseja alterar: \n");
    scanf("%d", &posicao);

    if (posicao < 0 || posicao >= qtd_contatos) {
        printf("Posição inválida!\n");
        return;
    }

    printf("O que você gostaria de alterar?\n");
    printf("Nome (n), Telefone (t), Email (e), Tipo de Telefone (tp), Data de Nascimento (dn)\n");
    printf("Digite a opção desejada: \n");
    scanf("%s", opcao);

    if (strcmp(opcao, "n") == 0) {
        printf("Digite o novo nome: \n");
        scanf("%s", novo_valor);
        if (verificaNomeDuplicado(novo_valor)) {
            printf("Erro: Já existe um contato com esse nome!\n");
            return;
        }
        strcpy(contato[posicao].nome, novo_valor);
    } else if (strcmp(opcao, "t") == 0) {
        printf("Digite o novo telefone: \n");
        scanf("%s", novo_valor);
        strcpy(contato[posicao].telefone, novo_valor);
    } else if (strcmp(opcao, "e") == 0) {
        printf("Digite o novo email: \n");
        scanf("%s", novo_valor);
        strcpy(contato[posicao].email, novo_valor);
    } else if (strcmp(opcao, "tp") == 0) {
        printf("Digite o novo tipo de telefone (celular, fixo, residência, trabalho): \n");
        scanf("%s", novo_valor);
        strcpy(contato[posicao].tipo_telefone, novo_valor);
    } else if (strcmp(opcao, "dn") == 0) {
        printf("Digite a nova data de nascimento (dd mm aaaa): \n");
        scanf("%d %d %d", &contato[posicao].dia, &contato[posicao].mes, &contato[posicao].ano);
    } else {
        printf("Opção inválida!\n");
    }

    printf("Contato alterado com sucesso!\n");
}

void buscarContato() {
    char nome_busca[45];
    bool encontrado = false;

    printf("Digite o nome do contato que deseja buscar: \n");
    scanf("%s", nome_busca);

    for (int i = 0; i < qtd_contatos; i++) {
        if (strcmp(contato[i].nome, nome_busca) == 0) {
            printf("Contato encontrado:\n");
            printf("Nome: %s\n", contato[i].nome);
            printf("Telefone: %s\n", contato[i].telefone);
            printf("Email: %s\n", contato[i].email);
            printf("Tipo de Telefone: %s\n", contato[i].tipo_telefone);
            printf("Data de Nascimento: %d/%d/%d\n", contato[i].dia, contato[i].mes, contato[i].ano);
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        printf("Contato não encontrado.\n");
    }
}

void apagarContato() {
    int posicao;
    char confirmacao[2];

    printf("Digite a posição do contato que deseja apagar: \n");
    scanf("%d", &posicao);

    if (posicao < 0 || posicao >= qtd_contatos) {
        printf("Posição inválida!\n");
        return;
    }

    printf("Tem certeza que deseja apagar o contato %s? (s/n)\n", contato[posicao].nome);
    scanf("%s", confirmacao);

    if (strcmp(confirmacao, "s") == 0) {

        for (int i = posicao; i < qtd_contatos - 1; i++) {
            contato[i] = contato[i + 1];
        }
        qtd_contatos--; 
        printf("Contato apagado com sucesso!\n");
    } else {
        printf("Operação cancelada.\n");
    }
}

void listaContatos() {
    for (int i = 0; i < qtd_contatos; i++) {
        printf("\n[%d] O contato de %s possui %s (%s), email %s e nasceu em %d/%d/%d\n",
               i,
               contato[i].nome,
               contato[i].telefone,
               contato[i].tipo_telefone,
               contato[i].email,
               contato[i].dia,
               contato[i].mes,
               contato[i].ano);
    }
}

void ordenaPorNome() {
    int i, j;
    AGENDA temp;

    for (i = 0; i < qtd_contatos - 1; i++) {
        for (j = 0; j < qtd_contatos - i - 1; j++) {
            if (strcmp(contato[j].nome, contato[j + 1].nome) > 0) {
                temp = contato[j];
                contato[j] = contato[j + 1];
                contato[j + 1] = temp;
            }
        }
    }
    printf("Contatos ordenados por nome.\n");
}

bool verificaNomeDuplicado(char *nome) {
    for (int i = 0; i < qtd_contatos; i++) {
        if (strcmp(contato[i].nome, nome) == 0) {
            return true;
        }
    }
    return false;
}
