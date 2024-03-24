#include <stdio.h>

int main() {
    int n;

    printf ("Introduceti dimensiunea vectorului, m=");
    scanf ("%d",&n);
    int v[100];
    for(int i=0; i<n; i++) {
        printf ("v[%d]= ", i);

        scanf ("%d", &v[i]);


    }
    int m;

    printf ("Introduceti dimensiunea vectorului, m=");
    scanf ("%d",&m);
    int y[100];
    for(int i=0; i<m; i++) {
        printf ("y[%d]= ", i);

        scanf ("%d", &y[i]);
    }
    int produsScalar=0;
    for (int i=0; i<n; i++){
        produsScalar+=v[i]*y[i];

    }
printf ("Produsul scalar este %d \n", produsScalar);
    return 0;
}
