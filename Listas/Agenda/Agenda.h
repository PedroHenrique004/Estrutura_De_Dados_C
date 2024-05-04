#ifndef AGENDA_H
#define AGENDA_H

typedef struct Pessoa {
    char nome[45];
    char telefone[21];
    char email[100];
    char tipo_telefone[20]; // celular, fixo, residência ou trabalho
    int dia;
    int mes;
    int ano;
} AGENDA;

extern AGENDA contato[5];
extern int qtd_contatos;

#endif
