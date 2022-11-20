#include <stdio.h>

int main(){
    int brs, klm, i, j, in;
    scanf("%d %d", &brs, &klm);
    int matrik[brs][klm];
    for (i = 0; i < brs; i++){
        for (j = 0; j < klm; j++){
        scanf("%d", &in);
        matrik[i][j] = in;}
    }
    printf("\n");
    for (i = 0; i < brs; i++){
        for (j = 0; j < klm; j++){
            printf("%d ", matrik[i][j]);}
        printf("\n");}
return 0;}
