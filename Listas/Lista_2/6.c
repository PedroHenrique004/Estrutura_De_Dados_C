#include <stdio.h>
#include <string.h>

int strpos(char *x, char y) {

    //procura a primeira ocorrência de um caractere específico em uma string e retorna a posição desse caractere na string

    char *p = strchr(x, y);
    if (p)
        return p - x;
    else
        return -1;
}

int main() {
    char s[100];
    char c;


    // fgets: Esta função lê uma linha inteira de texto de um fluxo de arquivo e copia os bytes como uma string terminada em nulo para o buffer fornecido. 
    // Ela permite a especificação do tamanho do buffer, reduzindo o risco de estouro de buffer12fgets lê a entrada até encontrar o caractere de nova linha ou o final do arquivo2.

    // scanf: Esta função lê a entrada formatada do fluxo de entrada padrãoscanf pode ser usado para ler uma linha de texto,
    // mas também lida com conversões de string para tipos numéricos integrados1scanf para de ler a entrada ao encontrar um espaço em branco2.
 
    // Portanto, a principal diferença entre fgets e scanf é que fgets lê uma linha inteira de texto de um fluxo de arquivo, enquanto scanf lê a entrada formatada do fluxo de entrada padrão e pode lidar com conversões de string para tipos numéricos3

    printf("Escreva a frase:\n ");
    scanf("%s", s);

    printf("Qual letra voce esta procurando? \n");
    scanf(" %c", &c);

    int pos = strpos(s, c);
    printf("A posicao de '%c' em '%s' eh: %d\n", c, s, pos);
    return 0;
}
