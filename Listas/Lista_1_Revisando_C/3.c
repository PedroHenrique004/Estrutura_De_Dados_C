#include <stdio.h>
#include <math.h>


int main (){

    int a,b,c ;
    double delta, raiz1, raiz2;
    
    printf("Escreva o coeficiente a: ");
    scanf("%d", &a);

    printf("Escreva o coeficiente b: ");
    scanf("%d", &b);

    printf("Escreva o coeficiente c: ");
    scanf("%d", &c);

    delta = (b*b) - 4 + (a * c);

    raiz1 = (- b + sqrt(delta))/ 2 * a;
    raiz2 = (- b + sqrt(delta))/ 2 * a;

    if(delta < 0)
    {
        printf("Não existem raízes reais para esta equação.\n");
    } 
    
    else 
    {
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);

        printf("Raiz 1 : %.2lf\n", raiz1);
        printf("Raiz 2 : %.2lf\n", raiz2);
    }

    return 0;
 }