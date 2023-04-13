#include <stdio.h>

int main() {
    int a, b, c;
    c = 24;
    scanf("%d", &a);
    for (int i=0; i<a; i++) {
        scanf("%d", &b);
        if (b < c) {
            c = b;
        }
        
    }
    printf("%d", c);
    return 0;
}  