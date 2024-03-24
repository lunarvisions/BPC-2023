#include <stdio.h>

int main() {
    float a[10][10], aux;
    int n, m, i, j, k;

    printf("m = ");
    scanf("%d", &m);

    printf("n = ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("a[%d][%d]= ", i, j);
            scanf("%f", &a[i][j]);
        }
    }

    k = 1;
    while (k) {
        k = 0;
        for (j = 0; j < m - 1; j++) {
            if (a[0][j] > a[0][j + 1]) {
                for (i = 0; i < n; i++) {
                    aux = a[i][j];
                    a[i][j] = a[i][j + 1];
                    a[i][j + 1] = aux;
                    k = 1;
                }
            }
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%5.2f", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
