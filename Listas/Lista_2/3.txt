#include <stdio.h>

int strlen(char *s) {
    int length = 0;
    while(s[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char s[] = "Ola mundo!";
    printf("O comprimento da string e: %d\n",strlen(s));
    return 0;
}
