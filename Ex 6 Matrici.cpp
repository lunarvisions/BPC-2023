#include <stdio.h>

int main() {
    int n, p, j, i, k;
    int x[10], a[10][10], y[10];

    printf("\nNr de elemente ale vectorului= ");
    scanf("%d", &n);

    for (j = 0; j < n; j++) {
        printf("x[%d]= ", j);
        scanf("%d", &x[j]);
    }

    printf("\nMatricea ");
    printf("\nNr de coloane= ");
    scanf("%d", &p);

    // Citirea matricei a
    for (i = 0; i < n; i++)
        for (j = 0; j < p; j++) {
            printf("a[%d][%d]= ", i, j);
            scanf("%d", &a[i][j]);
        }

    for (j = 0; j < p; j++) {
        y[j] = 0;
        for (k = 0; k < n; k++)
            y[j] += x[k] * a[k][j];
    }

    printf("\nRezultatul este: \n");
    for (j = 0; j < p; j++)
        printf("%d ", y[j]);

    printf("\n");
    return 0;
}
