#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        int c;
        scanf("%d", &c);
        printf("%d\n", c);
    }
    return 0;
}