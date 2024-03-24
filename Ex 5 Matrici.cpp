#include <stdio.h>

int main() {
    int n;
    printf("Introduceti numarul de linii/coloane: ");
    scanf("%d", &n);
    char stairCase[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j >= n - 1) {
                stairCase[i][j] = '#';
            }
            else {
                stairCase[i][j] = ' ';
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", stairCase[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}