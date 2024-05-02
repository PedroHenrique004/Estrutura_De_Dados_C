#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[40];
    char telefone[12];
    char dataNasc[11];

} AGENDA;

int main(int argc, char *argv[]){

    AGENDA contato;

    // char nome[40];
    // char tel[13];
    // char dataNasc[11];

    // printf("Digite o nome do contato: ");
    // fgets(nome,sizeof(nome), stdin);

    // printf("Digite o telefone do contato: ");
    // fgets(tel,sizeof(tel), stdin);

    // printf("Digite a data de nascimento do contato: ");
    // fgets(dataNasc,sizeof(dataNasc), stdin);



        printf("O contato %s ", argv[0]);
        printf("possui telefone %s ", argv[1]);
        printf("e nasceu em %s", argv[2]);

    // for(int i = 0; i < 40; i++)
    // {
    //     printf("O contato %s", nome[i]);
    // }

    // for(int i = 0; i < 13; i++)
    // {
    //     printf("possui telefone %s", tel[i]);
    // }

    // for(int i = 0; i < 11; i++)
    // {
    //     printf("e nasceu em %s", dataNasc[i]);
    // }


}