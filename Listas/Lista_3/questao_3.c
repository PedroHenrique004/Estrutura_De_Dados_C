#include <stdio.h>

void carrega(int v[], int *n){

    static int index = 0;
    v[index] = *n;
    index++;
}

int main(){

    int vector[5];
    int num;

    for(int i = 0; i < 5; i++)
    {
        printf("\nEntre com um valor: ");
        scanf("%d", &num);

        //carrega(vector, num);
    }

    for(int i = 0; i < 5; i++)
       printf("\n %d ", vector[i]);

    
}