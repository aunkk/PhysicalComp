#include <stdio.h>

int main(){
    float num1, num2, num3, num4;
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);
    printf("Summation is %.2f\nAverage is %.3f",num1+num2+num3+num4, (num1+num2+num3+num4)/4);
}