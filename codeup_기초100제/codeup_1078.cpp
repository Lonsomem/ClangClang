#include <stdio.h>

int main() {
    int a;
    int sum = 0;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
        else {continue;}
    }
    printf("%d", sum);
    return 0;

}