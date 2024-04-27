#include <stdio.h>
#include <stdlib.h>

int main(){

    int *v, n, i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    v = realloc(n,sizeof(int));

    if (v == NULL)
    {
        printf("Houve uma falaha na alocacao da memoria");
        exit(1);
    }

    for(i= n-1 ;i >= 0; i--){
        printf("%d ", v[i]);
    }

    for (i = 0;i < n; i++){
        printf("Digite o valor :");
        scanf("%d", &v[i]);
    }

    for(i= n-1 ; i >= 0; i--){
        printf("%d ", v[i]);
    }

    free(v);

}