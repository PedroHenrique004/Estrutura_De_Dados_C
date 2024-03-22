#include <stdio.h>
#include <string.h>

void strupr2 (char *x, char *y) {
    // A função strcspn recebe duas strings como entrada, string_1 e string_2. Ela percorre string_1, 
    // procurando por qualquer caractere que esteja presente em string_2. 
    // A função retorna o comprimento de string_1 se nenhum dos caracteres de string_2 for encontrado em string_1
    x[strcspn(x, "\n")] = 0;
    y[strcspn(y, "\n")] = 0;

    // A função strcpy é usada para copiar uma string para outra. Ela recebe dois parâmetros: 
    // a string de destino e a string de origem. A função copia a string de origem para a string de destino
    // OBS:Parei de usar pois é inutil nessa função
    // strcpy(juntas, x);

    //A função strcat é usada para concatenar duas strings, ou seja, anexar uma string ao final de outra. Ela recebe duas strings como parâmetros: a string de destino e a string de origem. 
    // A função anexa a string de origem ao final da string de destino
    strcat(x, y);
}

int main() {
    char x[26];
    char y[26];
    char juntas[51];

    printf("Digite uma frase de ate 25 caracteres: \n");
    fgets(x, 26, stdin); 

    printf("Digite outra frase de ate 25 caracteres: \n");
    fgets(y, 26, stdin); 

    strupr2(x, y);

    printf("Aqui esta: %s", x);

    return 0;
}
