#include <stdio.h>

void histograma(char dia, int temperatura){
    //os parametros recebidos sao o vetor de dias e o de temperaturas
    char desenho[51];

    for(int i = 0; i < temperatura; i++){
        desenho[i] = '-';
    }
    desenho[temperatura] = '\0'; 

    printf("%c: %s\n", desenho); 
}

int main(){

    char dias[7];
    int temp[7];

    dias[0] = 'D';
    dias[1] = 'S';
    dias[2] = 'T';
    dias[3] = 'Q';
    dias[4] = 'Q';
    dias[5] = 'S';
    dias[6] = 'S';

    
    printf("Escreva as 7 temperaturas comecando pelo Domingo: (limite entre 0 e 50)");
    scanf("%d %d %d %d %d %d %d", &temp[0], &temp[1],&temp[2],&temp[3],&temp[4],&temp[5],&temp[6]);

    for(int i = 0; i < 7; i++){
        //Passo o vetro de dia e a temperatura como parametros
        histograma(dias[i], temp[i]);
    }  

    return 0;
}
