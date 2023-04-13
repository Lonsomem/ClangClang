#include <stdio.h>

int main() {
    double h, b, c, s, res;
    scanf("%lf %lf %lf %lf", &h, &b, &c, &s);
    res = (h*b*c*s)/8388608;
    printf("%.1lf MB",res);
    return 0;
}