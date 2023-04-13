#include <stdio.h>

int main() {
    int a, b, c;
    b = 0;
    scanf("%d", &a);
    while (c < a) {
        b++;
        c += b;
    }
    printf("%d", c);
    return 0;
}