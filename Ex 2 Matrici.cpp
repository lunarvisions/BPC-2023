#include <stdio.h>

int main() {
    int a[100][100], b[100][100], c[100][100];
    int m, n, p, k;

    printf("Matricea 1:\n");
    printf("Numarul de linii: ");
    scanf("%d", &m);
    printf("Numarul de coloane: ");
    scanf("%d", &n);

    printf("Introduceti elementele matricei 1:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matricea 1:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Matricea 2:\n");
    printf("Numarul de coloane: ");
    scanf("%d", &p);

    printf("Introduceti elementele matricei 2:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("Matricea 2:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            printf(" %d ", b[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            c[i][j] = 0;
            for (k = 0; k < n; k++) {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("Matricea rezultat este:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf(" %d", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
