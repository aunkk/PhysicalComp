#include <stdio.h>
#include <math.h>

int main(){
    float height, weight, bmi;
    scanf("%f", &height);
    scanf("%f", &weight);
    height = height/100;
    bmi = weight / ((height)*(height));
    printf("%f", bmi);
}