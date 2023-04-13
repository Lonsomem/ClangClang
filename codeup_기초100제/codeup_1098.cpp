#include <stdio.h>

int main() {
    int h, w, n, l, d, x, y;
    scanf("%d %d", &h, &w);
    int b[h][w]{};
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d %d %d %d", &l, &d, &x, &y);
        if (d == 0) {
            for (int g=0; g<l; g++) {
                b[x-1][y-1+g] = 1;
            }
        }
        else {
            for (int g=0; g<l; g++) {
                b[x-1+g][y-1] = 1;
            }
        }
    }
    for (int i=0; i<h; i++) {
        for (int g=0; g<w; g++) {
            printf("%d ", b[i][g]);
        }
        printf("\n"); 
    }
    return 0;
}