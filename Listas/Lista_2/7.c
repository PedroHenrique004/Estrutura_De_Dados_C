#include <stdio.h>
#include <string.h>

void strdel(char *s, int p) {
    int len = strlen(s);
    if (p < 0 || p >= len) {
        return;
    }
    memmove(&s[p], &s[p + 1], len - p);
}

int main() {
    char s[100];
    int p;

    printf("Digite a string:\n");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0; 

    printf("Digite a posicao do caractere que voce deseja remover:\n");
    scanf("%d", &p);
    p--;

    strdel(s, p);
    printf("A string apos a remocao do caractere: %s\n", s);

    return 0;
}


// GPT