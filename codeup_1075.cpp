#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for (int i = a-1; i >= 0; i--) {
        printf("%d\n", i);
    }
    return 0;
}