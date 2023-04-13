#include <stdio.h>

int main() {
    int a;
    int b = 0;
    int c = 0;
    scanf("%d", &a);
    while (c < a) {
        b++;
        c += b;        
    }
    printf("%d", b);
    return 0;


}