#include <stdio.h>

//Cautarea unei valori date intr-un vector
int main() {
    int n;
    printf ("Introduceti dimensiunea vectorului, m=");
    scanf ("%d",&n);
    int v[100];
    for(int i=0; i<n; i++) {
        printf ("v[%d]= ", i);

        scanf ("%d", &v[i]);
    }
    int value;
    printf("Introduceti valoarea cautata");
    scanf ("%d", &value);
    for(int i=0; i<n; i++){
        if (v[i]==value){
            printf ("Elmentul cautat se afla pe pozitia %d", i);
        }
    }
    return 0;
}
