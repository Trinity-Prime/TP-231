#include <stdio.h>

void prodVec(int a[3], int b[3], int res[3]){
    res[0]=a[1]*b[2] - a[2]*b[1];
    res[1]=a[2]*b[0] - a[0]*b[2];
    res[2]=a[0]*b[1] - a[1]*b[0];
}

int main(){
    int u[3], v[3], w[3];

    printf("Entrez les 3 composantes du vecteur U : ");
    for(int i=0; i<3; i++){
        scanf("%d", &u[i]);
    }
    printf("Entrez les 3 composantes du vecteur V :  ");
    for(int i=0; i<3; i++){
        scanf("%d", &v[i]);
    }
    printf("Entrez les 3 composantes du vecteur W :  ");
    for(int i=0; i<3; i++){
        scanf("%d", &w[i]);
    }

    prodVec(u, v, w);
    printf("Produit vectotiel U x V = (%d, %d, %d)\n", w[0], w[1], w[2]);
    return 0;
}