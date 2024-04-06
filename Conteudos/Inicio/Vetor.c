#include <stdio.h>
#include <stdio.h>

    //  %p -> para Endereço 
    // %d , x não rodaria pois dé para inteiro e x é ponteiro
      // & = endereço

void atualizar (int v[]); //Precisa dessa declaração para rodar

int main(){
    int x[3], y[4];



    for(int i=0; i<3; i++){
        y[i] = i+11;
    }

    for(int i=0; i<3; i++){
        x[i] = i+11;
    }

    printf("\n x = %p e y = %p", x, y);
    printf("\n &y[0] -> %p, y[0] = %d", &y[0], y[0]);
    printf("\n &y[1] -> %p, y[1] = %d", &y[1], y[1]);
    printf("\n &y[2] -> %p, y[2] = %d", &y[2], y[2]);
    printf("\n &y[3] -> %p, y[3] = %d", &y[3], y[3]);

    atualizar(y);

    for(int i=0; i < 4; i++){
        printf("\n &y[%d] -> %p, y[%d] = %d",i, &y[i],i, y[i]);
    }

    // printf("\n y[0] -> %d", y[0]);
    // printf("\n y[1] -> %d", y[1]);

    return 0;
}

void atualizar (int v[]){
    for (int i =0; i < 4; i++){
        v[i] = v[i] * 2;
    }
}