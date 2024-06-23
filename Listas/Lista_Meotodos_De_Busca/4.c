#include <stdio.h>

int pertence(int x, int L[], int n) {
    int i = 0, f = n - 1, m;
    while (i <= f) {
        m = (i + f) / 2;
        if (x == L[m]) return 1;
        if (x > L[m]) f = m - 1; 
        else i = m + 1;
    }
    return 0;
}

int main() {
    int L[] = {99, 95, 89, 84, 77, 72, 69, 68, 57, 53, 49, 41, 37, 33, 31, 27, 16, 10};
    int n = sizeof(L) / sizeof(L[0]);
    int items[] = {33, 50, 77, 90, 99};
    int num_items = sizeof(items) / sizeof(items[0]);

    for (int i = 0; i < num_items; i++) {
        int result = pertence(items[i], L, n);
        if (result) {
            printf("Elemento %d encontrado na lista.\n", items[i]);
        } else {
            printf("Elemento %d nao encontrado na lista.\n", items[i]);
        }
    }

    return 0;
}
