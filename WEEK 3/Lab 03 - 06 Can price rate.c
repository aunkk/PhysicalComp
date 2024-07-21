#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main(){
    double price, redian, height, volume;
    scanf("%lf %lf %lf", &price, &redian, &height);
    volume = height * M_PI * pow((redian/2), 2);
    printf("Volume : %.2lfml\nBaht/ml : %.4lf", volume, price/volume);
}