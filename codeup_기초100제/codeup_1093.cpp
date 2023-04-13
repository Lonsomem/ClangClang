#include <stdio.h>

int main() {
    int a, b;
    scanf("%d\n", &a);
    int c[23] = {0};
    for (int i=0; i<a;i++) {
        scanf("%d", &b);
        c[b-1] += 1;
    }
    for (int i=0; i<23; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}