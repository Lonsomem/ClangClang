#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    for (char i = 'a'; i <= a; i++) {
        printf("%c ", i);
    }
    return 0;
}