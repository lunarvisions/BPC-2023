#include <stdio.h>

int main() {
    int i, j, n, p, aux;

    printf("Numarul de linii/coloane = ");
    scanf("%d", &n);

    int a[10][10];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf(" a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrice introdusa:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    do {
        p = 0;
        for (i = 0; i < n - 1; i++) {
            if (a[i][i] > a[i + 1][i + 1]) {
                int l = i;
                int ll = i + 1;
                p = 1;

                for (j = 0; j < n; j++) {
                    aux = a[l][j];
                    a[l][j] = a[ll][j];
                    a[ll][j] = aux;
                }

                for (j = 0; j < n; j++) {
                    aux = a[j][l];
                    a[j][l] = a[j][ll];
                    a[j][ll] = aux;
                }
            }
        }
    } while (p);

    printf("\nMatrice rezultat:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
