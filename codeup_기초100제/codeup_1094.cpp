#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int b[a] = {0};
    for (int i=0; i<a; i++) {
        int c;
        scanf("%d", &c);
        b[a-i-1] = c;
    }
    for (int i=0; i<a; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}