#include <stdio.h>

int soma(a, b){
        int resultado = a + b;
        return resultado;
}

int main(){

    int dia, mes, ano, resultado, resto;

    printf("Digite o dia de nascimento: ");
    scanf("%d", &dia);

    printf("Digite o mes de nascimento: ");
    scanf("%d", &mes);

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano);

    resultado = soma(dia, mes);

    dia = resultado / 100; 
    mes = resultado % 100; 

    resultado = soma(dia, mes);

    resto = resultado % 5;

    if (resto == 0)
    {
        printf("O seu perfil e ti2mido");
    }
    else if (resto == 1)
    {
        printf("O seu perfil e sonhador");
    }
    else if (resto == 2)
    {
        printf("O seu perfil e paquerador");
    }
    else if (resto == 3)
    {
        printf("O seu perfil e atraente");
    }
    else if (resto == 4)
    {
        printf("O seu perfil e irresisti2vel");
    }
    
    


    return 0;
}