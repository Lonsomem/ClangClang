#include <stdio.h>

int main() {
    int a;
    int b[19][19] = {0};
    scanf("%d", &a);
    for (int i=0; i<a; i++) {
        int c, d;
        scanf("%d %d", &c, &d);
        b[c-1][d-1] = 1;
    }
    for (int i=0; i<19; i++) {
        for (int g=0; g<19; g++) {
            printf("%d ", b[i][g]);
        }
        printf("\n");
    }
    return 0;
}