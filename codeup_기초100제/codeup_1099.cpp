#include <stdio.h>

int main() {
    int a[10][10]{};
    int x = 1;
    int y = 1;
    for (int i=0; i<10; i++) {
        for (int g=0; g<10; g++) {
            scanf("%d", &a[i][g]);
        }
    }
    while (a[x][y] != 2 and !(a[x+1][y] == 1 && a[x][y+1] == 1)) {
        a[x][y] = 9;
        if (a[x][y+1] == 1) {
            x += 1;
        }
        else {
            y += 1;
        }
    }
    a[x][y] = 9;
    for (int i=0; i<10; i++) {
        for (int g=0; g<10; g++) {
            printf("%d ", a[i][g]);
        }
        printf("\n");
    }
}