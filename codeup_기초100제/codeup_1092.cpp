#include <stdio.h>

int main() {
    long long int a, b, c, d;
    d = 0;
    scanf("%lld %lld %lld", &a, &b, &c);
    while (d < b or d < c) {
        d += a;
    }
    while (d % b != 0 or d % c != 0) {
        d += a;
    }
    printf("%lld", d);
    return 0;
}