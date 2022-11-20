#include <stdio.h>

int main(){
    int brs1, brs2, i, in, hasil;
    scanf("%d %d", &brs1, &brs2);
    int baris1[brs1], baris2[brs2];
    if (brs1 == brs2){
        for (i = 0; i < brs1; i++){
            scanf("%d", &in);
            baris1[i] = in;}
        for (i = 0; i < brs2; i++){
            scanf("%d", &in);
            baris2[i] = in;}
        for (i = 0; i < brs1; i++){
            hasil = baris1[i] * baris2[i];
            printf("%d ", hasil);}}
    else {
        printf("Jumlah tidak sama");}
return 0;}
