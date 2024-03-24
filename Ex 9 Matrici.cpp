#include <stdio.h>

int main() {
    float a[10][10], min;
    int n, m, i, j;

    printf("m=");
    scanf("%d", &m);

    printf("n=");
    scanf("%d", &n);


    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("a(%d,%d)=", i, j);
            scanf("%f", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        min = a[i][0];

        for (j = 1; j < m; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }

        for (j = 0; j < m; j++) {
            a[i][j] = a[i][j] - min;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%3.2f ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
