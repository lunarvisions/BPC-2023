#include <stdio.h>

int main() {
    int n;

    printf("Introduceti dimensiunea vectorilor: ");
    scanf("%d", &n);

    int arr1[100], arr2[100], result[100];

    printf("Introduceti elementele primului vector:\n");
    for (int i = 0; i < n; i++) {
        printf("Elementul %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Introduceti elementele celui de-al doilea vector:\n");
    for (int i = 0; i < n; i++) {
        printf("Elementul %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n; i++) {
        result[i] = arr1[i] * arr2[i];
    }

    printf("Produsul vectorial este: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
