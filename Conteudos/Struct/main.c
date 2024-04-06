#include <stdio.h>

int main(){

    typedef struct data
    {
        int dia;
        int mes;
        int ano;
    } DATA;

    DATA hoje = {06, 04, 2024};

    printf("%d de %d de %d", hoje.dia, hoje.mes, hoje.ano);
    

    return 0;
}