#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a >= 90) {
        printf("A");
    }
    else if (a < 90 && a >=70 ) {
        printf("B");
    }
    else if (a < 70 && a >= 40) {
        printf("C");
    }
    else {
        printf("D");
    }
    return 0;
}