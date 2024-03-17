#include <stdio.h>

int main(){

    unsigned x, soma;
    soma = 1;
    
    

    printf("Escreva o numero que voce quer ver o fatorial: ");
    scanf("%u", &x);

    for (int i = x; i >= 1; i--)
        {
            soma *= i;
        }

    printf("%u", soma);
}