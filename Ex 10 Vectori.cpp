#include <stdio.h>

int main() {
    int n;
    printf("Introduceti dimensiunea vectorilor: ");
    scanf("%d", &n);

    int v1[100], v2[100], result[100];

    printf("Introduceti elementele primului vector:\n");
    for (int i = 0; i < n; i++) {
        printf("Elementul %d: ", i + 1);
        scanf("%d", &v1[i]);
    }


    printf("Introduceti elementele celui de-al doilea vector:\n");
    for (int i = 0; i < n; i++) {
        printf("Elementul %d: ", i + 1);
        scanf("%d", &v2[i]);
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        int found = 0;

        for (int j = 0; j < n; j++) {
            if (v1[i] == v2[j]) {
                found = 1;
                break;
            }
        }

        if (!found) {
            result[count++] = v2[i];
        }
    }

    printf("Vectorul rezultat este: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}
