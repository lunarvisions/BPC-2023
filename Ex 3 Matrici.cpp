#include <stdio.h>

int main() {
    int m, p, i, j, k;
    int a[10][10], b[10][10], c[10][10];

    printf("\nMatricea 1\n");
    printf("Nr de linii/coloane = ");
    scanf("%d", &m);

    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matricea a este:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Puterea este: ");
    scanf("%d", &p);

    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            b[i][j] = (i == j) ? 1 : 0;
        }
    }

    for (int q = 0; q < p; q++) {
        for (i = 0; i < m; i++) {
            for (j = 0; j < m; j++) {
                c[i][j] = 0;
                for (k = 0; k < m; k++) {
                    c[i][j] += b[i][k] * a[k][j];
                }
            }
        }

        for (i = 0; i < m; i++) {
            for (j = 0; j < m; j++) {
                b[i][j] = c[i][j];
            }
        }
    }

    printf("Matricea rezultat este:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    getchar();
    return 0;
}
