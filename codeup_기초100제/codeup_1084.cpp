#include <stdio.h>

int main() {
    int a, b, c;
    int d = 0;
    scanf("%d %d %d", &a, &b, &c);
    for (int i = 0; i < a; i++) {
        for (int g = 0; g < b; g++) {
            for (int j = 0; j < c; j++) {
                printf("%d %d %d\n", i, g, j);
                d++;
            }
        }
    }
    printf("%d", d);
    return 0;
}