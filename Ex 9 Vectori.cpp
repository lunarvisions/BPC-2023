#include <stdio.h>

int main() {
    int n;

    printf("Introduceti dimensiunea vectorului: ");
    scanf("%d", &n);

    int v[100];

    printf("Introduceti elementele vectorului:\n");
    for (int i = 0; i < n; i++) {
        printf("Elementul %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    int min = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] < min) {
            min = v[i];
        }
    }
    int primaAp = -1, ultimaAp = -1, penultimaAp = -1;
    for (int i = 0; i < n; i++) {
        if (v[i] == min) {
            if (primaAp == -1) {
                primaAp = i;
            }
            penultimaAp = ultimaAp;
            ultimaAp = i;
        }
    }

    printf("Minimul este: %d\n", min);
    printf("Prima aparitie a minimului: %d\n", primaAp);
    printf("Ultima aparitie a minimului: %d\n", ultimaAp);
    printf("Penultima aparitie a minimului: %d\n", penultimaAp);

    return 0;
}
