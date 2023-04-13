#include <stdio.h>

int main() {
    double w, h, b, res;
    scanf("%lf %lf %lf", &w, &h, &b);
    res = w * h * b / 8388608;
    printf("%.2lf MB", res);
    return 0;
}