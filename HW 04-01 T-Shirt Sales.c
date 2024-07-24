#include <stdio.h>

int main(){
    double price, percent, amount, paidPrice1, paidPrice2;
    int paidItem;
    scanf("%lf %lf %lf", &price, &percent, &amount);

    // Buy 2 get 1 code
    paidItem = (int)amount - (int)amount / 3;
    paidPrice1 = paidItem*price;

    // discount code
    paidPrice2 = (price - ((price * percent)/100))*amount;

    if (paidPrice1 < paidPrice2)
    {
        printf("Buy 2 Get 1\n%.2lf", paidPrice1);
    }
    else{
        printf("Discount %d%\n%.2lf", ((int)percent), paidPrice2);
    }

    // printf("\npaid1 : %lf\npadi : %lf", paidPrice1, paidPrice2);
}