#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = 1; i <= a; i++) {
        for (int g = 1; g <= b; g++) {
            printf("%d %d\n", i, g);
        }
    }
    return 0;
}