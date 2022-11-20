#include <stdio.h>

int main(){
    int ordo, a, b, c, isi, hasil;
    scanf("%d", &ordo);
    int matrik1[ordo][ordo], matrik2[ordo][ordo];
    printf("\nMatriks A\n");
    for(a = 0; a < ordo; a++){
        for(b = 0; b < ordo; b++){
            scanf("%d", &isi);
            matrik1[a][b] = isi;}}
    printf("\nMatriks B\n");
    for(a = 0; a < ordo; a++){
        for(b = 0; b < ordo; b++){
            scanf("%d", &isi);
            matrik2[a][b] = isi;}}
    printf("\nMatriks A x B\n");
    for(a = 0; a < ordo; a++){
        for(b = 0; b < ordo; b++){
            for(c = 0, hasil = 0; c < ordo; c++){
                hasil += matrik1[a][c] * matrik2[c][b];}
            printf("%d ", hasil);}
    printf("\n");}
return 0;}
