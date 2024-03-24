#include <stdio.h>

int citire(float x[]) {
    int i, n;
    printf("n=");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("x[%d]=", i);
        scanf("%f", &x[i]);
    }
    return n;
}
// Subprogram pentru citirea elementelor intregi dintr-un vector cu returnarea numarului de elemente prin numele subprogramului
int citire2(int x[]) {
    int i, n;
    printf("n=");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("x[%d]=", i);
        scanf("%d", &x[i]);
    }
    return n;
}

// Subprogram pentru afisarea elementelor din vector de numere reale
void afisare(float x[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%5.2f ", x[i]);
    }
}
// Subprogram pentru afisarea elementelor din vector de numere intregi
void afisare2(int x[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }
}

// Subprogram care determina valoarea medie a vanzarilor unei firme, eliminand zilele in care nu s-au inregistrat vanzari
float medieVanzariZilnice(float x[], int n) {
    int i, k = 0;
    float medie = 0;
    for (i = 0; i < n; i++) {
        if (x[i] != 0) {
            medie += x[i];
            k++;
        }
    }
    if (k) {
        medie /= k;
    }
    return medie;
}

// Subprogram care determina numarul de aparitii ale unei valori intregi intr-un vector
int numarAparitii(int vector[], int lungime, int target) {
    int aparitii = 0;

    for (int i = 0; i < lungime; i++) {
        if (vector[i] == target) {
            aparitii++;
        }
    }

    return aparitii;
}

// Subprogram pentru compactarea unui vector prin eliminarea dublurilor
void compactare(float x[], int* n) {
    for (int i = 0; i < *n - 1; i++) {
        int j = i + 1;
        while (j < *n) {
            if (x[i] == x[j]) {
                for (int k = j; k < *n - 1; k++) {
                    x[k] = x[k + 1];
                }
                (*n)--;
            }
            else {
                j++;
            }
        }
    }
}

//Subprogram care determina daca un numar este palindrom
int isPalindrom(int numar) {
    int invers = 0, original, rest;

    original = numar;

    while (numar != 0) {
        rest = numar % 10;
        invers = invers * 10 + rest;
        numar = numar / 10;
    }

    if (original == invers) {
        return 1;
    }
    else {
        return 0;
    }
}

// Subprogram care determina numarul de palindroame dintr-un vector
int nrPalindrom(int v[], int n) {
    int numarPalindrom = 0;

    for (int i = 0; i < n; i++) {
        if (isPalindrom(v[i])) {
            numarPalindrom++;
        }
    }

    return numarPalindrom;
}

int isPrim(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Subprogram care determina numerele prime dintr-un vector
void numerePrime(int v[], int n) {
    printf("Numerele prime din vector sunt: ");
    for (int i = 0; i < n; i++) {
        if (isPrim(v[i])) {
            printf("%d ", v[i]);
        }
    }
    printf("\n");
}

// Subprogram care realizeaza sortarea unui vector folosind algoritmul Buble Sort
void bubleSort(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                int aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}

// Subprogram care primeste ca parametru un vector de numere intregi si returneaza un vector
// de aceeasi dimensiune care contine ultima cifra a fiecarui nr. din primul vector, ordinea elementelor ramane neschimbata
void ultimaCifra(int v[], int n, int rezultat[]) {
    for (int i = 0; i < n; i++) {
        rezultat[i] = v[i] % 10;
    }
}

// Subprogram pentru inversarea coloanelor si liniilor unei matrice intre ele
void inversareMatrice(int matrice[][100], int n, int m) {
    int temp;
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < m; j++) {
            temp = matrice[i][j];
            matrice[i][j] = matrice[n - i - 1][j];
            matrice[n - i - 1][j] = temp;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m / 2; j++) {
            temp = matrice[i][j];
            matrice[i][j] = matrice[i][m - j - 1];
            matrice[i][m - j - 1] = temp;
        }
    }
}

// Subprogram pentru ordonarea descrescatoare a liniilor unei matrice
void ordonareDescrescatoareLinii(int mat[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 1; j++) {
            for (int k = 0; k < m - j - 1; k++) {
                if (mat[i][k] < mat[i][k + 1]) {
                    int temp = mat[i][k];
                    mat[i][k] = mat[i][k + 1];
                    mat[i][k + 1] = temp;
                }
            }
        }
    }
}

// Subprogram care verifica daca o matrice este patrat magic
int estePatratMagic(int matrice[][100], int n) {
    int sumaDiagonalaPrincipala = 0;
    int sumaDiagonalaSecundara = 0;

    for (int i = 0; i < n; i++) {
        sumaDiagonalaPrincipala += matrice[i][i];
        sumaDiagonalaSecundara += matrice[i][n - i - 1];
    }

    if (sumaDiagonalaPrincipala != sumaDiagonalaSecundara) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        int sumaLinie = 0;
        int sumaColoana = 0;

        for (int j = 0; j < n; j++) {
            sumaLinie += matrice[i][j];
            sumaColoana += matrice[j][i];
        }

        if (sumaLinie != sumaDiagonalaPrincipala || sumaColoana != sumaDiagonalaPrincipala) {
            return 0;
        }
    }

    return 1;
}


int main() {

    int optiune;
    int n, m, value, aparitiiTarget, numarPalindrom;
    float v[100], medie;
    int w[100];
    int matrice[100][100];
    int rezultat[100];
    do {

        printf("Selectati optiunea:\n");
        printf("1. Afisare vanzari zilnice\n");
        printf("2. Afisare numar aparitii in vector\n");
        printf("3. Compactare vector\n");
        printf("4. Determinare numar de palindroame dintr-un vector\n");
        printf("5. Determinare numere prime dintr-un vector\n");
        printf("6. Sortare vector folosind Buble Sort\n");
        printf("7. Ultima cifra a fiecarui numar dintr-un vector\n");
        printf("8. Inversare coloane si linii matrice\n");
        printf("9. Ordonare descrescatoare liniilor matrice\n");
        printf("10. Verificare matrice patrat magic\n");
        printf("0. Inchidere program\n");

        scanf("%d", &optiune);
        int n;

        // Subprogram medie vanzari zilnice
        float v[100], medie;

        // Subprogram numar aparitii in vector
        int target;
        int w[100];
        //Subprogram palindrom
        int value;

        //Subprograme matrice
        int m;
        int matrice[100][100];

        switch (optiune) {
            case 1:
                n = citire(v);
                medie = medieVanzariZilnice(v, n);
                printf("Vanzarile zilnice sunt: ");
                afisare(v, n);
                if (medie) {
                    printf("\n Media vanzarilor este: %5.2f", medie);
                }
                else {
                    printf("\n Firma nu a inregistrat vanzari");
                }
                break;

            case 2:
                n = citire2(w);
                afisare2(w, n);
                printf("\nIntroduceti valoarea target pentru numarul de aparitii: ");
                scanf("%d", &value);
                aparitiiTarget = numarAparitii(w, n, value);
                printf("\nNumarul de aparitii ale valorii %d in vector este: %d\n", value, aparitiiTarget);
                break;

            case 3:
                n = citire(v);
                compactare(v, &n);
                afisare(v, n);
                break;

            case 4:
                n = citire2(w);
                numarPalindrom = nrPalindrom(w, n);
                printf("Numarul de elemente palindrom din vector este: %d\n", numarPalindrom);
                break;

            case 5:
                n = citire2(w);
                numerePrime(w, n);
                break;

            case 6:
                n = citire2(w);
                printf("Vectorul inainte de sortare: ");
                afisare2(w, n);
                bubleSort(w, n);
                printf("Vectorul dupa sortare: ");
                afisare2(w, n);
                break;

            case 7:
                n = citire2(w);
                int rezultat[100];
                ultimaCifra(w, n, rezultat);
                printf("Ultima cifra a fiecarui numar: ");
                afisare2(rezultat, n);
                break;

            case 8:
                printf("Introduceti dimensiunile matricei (n m): ");
                scanf("%d %d", &n, &m);
                printf("Introduceti elementele matricei:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        printf("matrice[%d][%d]=", i, j);
                        scanf("%d", &matrice[i][j]);
                    }
                }
                printf("Matricea inainte de inversare:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        printf("%d ", matrice[i][j]);
                    }
                    printf("\n");
                }
                inversareMatrice(matrice, n, m);
                printf("Matricea dupa inversare:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        printf("%d ", matrice[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 9:
                printf("Introduceti dimensiunile matricei (n m): ");
                scanf("%d %d", &n, &m);
                printf("Introduceti elementele matricei:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        printf("matrice[%d][%d]=", i, j);
                        scanf("%d", &matrice[i][j]);
                    }
                }
                printf("Matricea inainte de ordonare:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        printf("%d ", matrice[i][j]);
                    }
                    printf("\n");
                }
                ordonareDescrescatoareLinii(matrice, n, m);
                printf("Matricea dupa ordonare:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        printf("%d ", matrice[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 10:
                printf("Introduceti dimensiunea matricei patratice (n): ");
                scanf("%d", &n);
                printf("Introduceti elementele matricei:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        printf("matrice[%d][%d]=", i, j);
                        scanf("%d", &matrice[i][j]);
                    }
                }
                if (estePatratMagic(matrice, n)) {
                    printf("Matricea este patrat magic.\n");
                }
                else {
                    printf("Matricea nu este patrat magic.\n");
                }
                break;

            default:
                printf("Optiune invalida");
        }
    } while (optiune != 0);

    return 0;
}
