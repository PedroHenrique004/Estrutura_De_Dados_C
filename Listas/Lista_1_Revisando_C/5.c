#include <stdio.h>

int main(){

    int x, y;
    x = 5;
    y = x++ + ++x;

    printf("%d %d", x, y);

    // x = 7 pois o "++" tanto antes como depois aumenta em 1 o valor da variável

    // y = 12 pois somará 6(x++) + 6(++x)

    return 0;
}