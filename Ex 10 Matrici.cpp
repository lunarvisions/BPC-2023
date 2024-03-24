#include <stdio.h>

int main() {
    int n, m, a[100][100];
    printf("Numarul de linii: ");
    scanf("%d", &m);

    printf("Numarul de coloane: ");
    scanf("%d", &n);

    if (m > 100 || m <= 0 || n > 100 || n <= 0) {
        printf("Dimensiunile matricei sunt invalide.\n");
        return 1;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nMedia pe fiecare linie:\n");
    for (int i = 0; i < m; i++) {
        int suma = 0;
        for (int j = 0; j < n; j++) {
            suma += a[i][j];
        }
        float avg = (float)suma / n;
        printf("Linia %d: %.2f\n", i + 1, avg);
    }

    printf("\nMedia pe fiecare coloana:\n");
    for (int j = 0; j < n; j++) {
        int suma = 0;
        for (int i = 0; i < m; i++) {
            suma += a[i][j];
        }
        float avg = (float)suma / m;
        printf("Coloana %d: %.2f\n", j + 1, avg);
    }

    getchar();
    return 0;
}
