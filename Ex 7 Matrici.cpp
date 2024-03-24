#include <stdio.h>

int main() {
    float a[10][10], max;
    int m, i, j;
    printf("m = ");
    scanf("%d", &m);

    // Citirea matricei
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);
        }
    }

    // Inițializarea lui max cu primul element din triunghi
    max = a[0][1];

    // Găsirea maximului din triunghiul de deasupra diagonalelor
    for (i = 0; i < m; i++) {
        for (j = i + 1; j < m - i; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }

    printf("Maximul din triunghiul de deasupra diagonalelor este: %f", max);
    return 0;
}
