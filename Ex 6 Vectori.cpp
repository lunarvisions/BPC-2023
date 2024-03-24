#include <stdio.h>

int main() {
    int n;
    float x[100], a;

    printf("Dimensiunea vectorului: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("x[%d]=", i);
        scanf("%f", &x[i]);
    }

    printf("Introduceti valoarea de inserat in vector: ");
    scanf("%f", &a);

    int i = 0;
    while ((i < n) && (x[i] < a)) {
        i++;
    }

    for (int j = n; j > i; j--) {
        x[j] = x[j - 1];
    }

    x[i] = a;
    n++;

    printf("Vectorul rezultat in urma inserarii este:\n");

    for (i = 0; i < n; i++) {
        printf("%5.2f ", x[i]);
    }
}
