#include <stdio.h>

int main() {
    int n1, n2;

    printf("Introduceti dimensiunea primului vector: ");
    scanf("%d", &n1);

    int arr1[100];
    printf("Introduceti elementele primului vector:\n");
    for (int i = 0; i < n1; i++) {
        printf("Elementul %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Introduceti dimensiunea celui de-al doilea vector: ");
    scanf("%d", &n2);

    int arr2[100];
    printf("Introduceti elementele celui de-al doilea vector:\n");
    for (int i = 0; i < n2; i++) {
        printf("Elementul %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    int result[100];

    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            result[k++] = arr1[i++];
        }
        else {
            result[k++] = arr2[j++];
        }
    }

    while (i < n1) {
        result[k++] = arr1[i++];
    }

    while (j < n2) {
        result[k++] = arr2[j++];
    }

    printf("Vectorul rezultat dupa merge este: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
