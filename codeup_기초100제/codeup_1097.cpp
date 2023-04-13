#include <stdio.h>

int main() {
    int b[19][19] = {0};
    int c;
    int d, e;
    for (int i=0; i<19; i++) {
        for (int g=0; g<19; g++) {
            scanf("%d", &b[i][g]);
            }
    }
    scanf("%d", &c);
    for (int i=0; i<c; i++) {
        scanf("%d %d", &d, &e);
        for (int x=0; x<19; x++) {
            for (int y=0; y<19; y++) {
                b[x][e-1] = !b[x][e-1];
                b[d-1][y] = !b[d-1][y];
                
            }
        }
        
    }
    for (int i=0; i<19; i++) {
        for (int g=0; g<19; g++) {
            printf("%d ", b[i][g]);
        }
        printf("\n");

    }

    return 0;
}