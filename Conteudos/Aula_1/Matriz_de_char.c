#include <stdio.h>


int main(int argc, char *argv[]){

    printf("Dias da semana : \n");

    for (int i = 0; i < argc; i++)
    {
        puts(argv[i]);
    }
    

    /*char entradas[3][10];

    for(int i = 0; i < 3; i++){
        printf("Entre com uma palavra: ");
        fgets(entradas[i], sizeof(entradas), stdin);
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 10; j++){
            printf("%c", entradas[i][j]);
        }   

    }
    */

    
}