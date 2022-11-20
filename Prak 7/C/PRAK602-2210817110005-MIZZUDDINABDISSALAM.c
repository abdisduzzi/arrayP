#include <stdio.h>

int main(){
    int brs, i, in;
    scanf("%d", &brs);
    int zetsu[brs];
    for (i = 0; i < brs; i++){
        scanf("%d", &in);
        zetsu[i] = in;
    }
    for(i = 0; i < brs; i++){
        printf("%d ", zetsu[i] * (i + 1));
    }
return 0;}
