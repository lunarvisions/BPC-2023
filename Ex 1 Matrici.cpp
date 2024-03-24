#include <stdio.h>

int main() {
    int m, n;
    int a[100][100];

    printf("Numar de linii: ");
    scanf("%d", &m);

    printf("Numar de coloane: ");
    scanf("%d", &n);


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d]= ", i, j);
            scanf("%d", &a[i][j]);
        }
    }


    printf("\nMatricea introdusa:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }


    int min = a[0][0];
    int max = a[0][0];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
    }

    printf("\nMaximul este: %d", max);
    printf("\nMinimul este: %d\n", min);

    return 0;
}
