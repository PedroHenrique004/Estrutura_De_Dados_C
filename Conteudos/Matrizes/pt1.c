#include <stdio.h>

int main(){
    char n[5][11];
    int i;


    for(i=0; i < 5 ;i++){

            printf("%d nome: ", i+1);
            fgets(n[i], sizeof(n[i]), stdin);
    }    


    for(int i=0; i < 5; i++) //
    {
            fputs(&n[i][0], stdout);
    }
}