#include <stdio.h>

int main(){
    double price, percent, amount, discount;
    scanf("%lf %lf %lf", &price, &percent, &amount);
    discount = price*percent/100;
    price = price-discount;
    printf("%.2lf", price*amount);
}