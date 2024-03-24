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
    int max;
    for (int i=0; i<n; i++){
        if(max < v[i])
        {
            max=v[i];
        }
    }
    printf ("Numarul maxim din vector este:  %d \n ", max);
    return 0;
}
