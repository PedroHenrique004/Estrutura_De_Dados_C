
#include <stdio.h>
#include <string.h>

int main() {
    char s[51];

    printf("Digite uma frase de até 50 caracteres: \n");
    fgets(s, 51, stdin); 

    strupr(s);

    printf("Aqui esta: %s\n", s);

    return 0;
}

// #include <stdio.h>
// #include <ctype.h>

// void strupr(char *s) {

//     for(int i = 0; s[i] != '\0'; i++){
//         s[i] = toupper(s[i]);
//     }
// }

// //Toupper vem da biblioteca ctype e é responsavel por passar os caracteres para maiusculo
// // o fgets le uma string

// int main() {
//     char s[51];

//     printf("Digite uma frase de até 50 caracteres: \n");
//     fgets(s, 51, stdin); 

//     strupr(s);

//     printf("Aqui esta: %s\n", s);

//     return 0;
// }


