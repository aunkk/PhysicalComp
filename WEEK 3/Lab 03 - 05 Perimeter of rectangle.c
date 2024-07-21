#include <stdio.h>

int main(){
    double height, width;
    scanf("%lf %lf", &height, &width);
    printf("Perimeter of rectangle = %.4lf units",((2*height)+(2*width)));
}