#include <stdio.h>

int main() {
    int n;
    printf("Introduceti numarul de elemente in vector: ");
    scanf("%d", &n);
    int arr[100];

    printf("Introduceti elementele vectorului:\n");
    for (int i = 0; i < n; i++) {
        printf("Elementul %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Vectorul initial:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }


        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }

    printf("Vectorul sortat:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
