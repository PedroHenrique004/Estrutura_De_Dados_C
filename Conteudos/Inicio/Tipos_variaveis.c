#include <stdio.h>

int aleat();

int main(){
    int i = 0;
    while(i >= 10){
        printf("\n%d", aleat());
        i++;
    }

}

int aleat(){
    // static -> salva o valor da variavel na memoria mesmo ela sendo local
    // auto -> REINICIA O VALOR DELA TODA VEZ QUE É USAD

    static unsigned s = 1234;
    auto unsigned n = s % 100;
    s += s/10;

    return n;
}