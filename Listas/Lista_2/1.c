#include <stdio.h>

int main(){

    int vetor[4];
    int vetorSize;
    
    

    printf("Escreva os 4 numeros dos vetores ");
    scanf("%d %d %d %d", &vetor[0], &vetor[1],&vetor[2],&vetor[3]);

    printf("Ordem invertida: ");

    vetorSize = 4;

    for(int i = vetorSize - 1; i >= 0; i--){
        
        printf("%d ", vetor[i]);
    }

}