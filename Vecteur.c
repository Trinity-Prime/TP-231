#include <stdio.h>

#define MAX 50 

int main() {
    int n, m;
    int V[MAX];     
    int M[MAX][MAX];     
    int R[MAX];

    printf("Entrez la taille du vecteur (nombre de colonnes) : ");
    scanf("%d", &n);

    printf("Entrez le nombre de colonnes de la matrice : ");
    scanf("%d", &m);

    printf("\nEntrez les elements du vecteur V (1 x %d) :\n", n);
    for (int i = 0; i < n; i++) {
        printf("V[%d] : ", i+1);
        scanf("%d", &V[i]);
    }

    printf("\nEntrez les elements de la matrice M (%d x %d) :\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("M[%d][%d] : ", i+1, j+1);
            scanf("%d", &M[i][j]);
        }
    }

    for (int j = 0; j < m; j++) {
        R[j] = 0;
        for (int i = 0; i < n; i++) {
            R[j] += V[i] * M[i][j];
        }
    }

    printf("\nLe vecteur resultat R = V x M est (1 x %d) :\n", m);
    for (int j = 0; j < m; j++) {
        printf("%d\t", R[j]);
    }
    printf("\n");

    return 0;
}