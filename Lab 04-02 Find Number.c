#include <stdio.h>

int main() {
    double num1, num2, num3, mid, min, max;
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    if (num1 >= num2) {
        min = num2;
        max = num1;
    } else {
        max = num2;
        min = num1;
    }

    if (num3 >= max) {
        mid = max;
        max = num3;
    } else if (num3 <= min) {
        mid = min;
        min = num3;
    } else {
        mid = num3;
    }

    printf("%.2lf\n", mid);
    return 0;
}
