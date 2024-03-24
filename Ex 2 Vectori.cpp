#include <stdio.h>

int main() {
    int n; // Numarul de elemente ale vectorului

    printf ("Introduceti dimensiunea vectorului, m=");
    scanf ("%d",&n);
    int v[100];
    for(int i=0; i<n; i++) {
        printf ("v[%d]= ", i);

        scanf ("%d", &v[i]);


    }
    int sum = 0;
    for (int i=0; i<n; i++){
        sum +=v[i];

    }
    printf ("Suma este %d \n ", sum);
    return 0;
}
