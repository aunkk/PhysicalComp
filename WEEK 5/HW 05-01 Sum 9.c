#include <stdio.h>

int main(){
    int number, sum;

    do
    {
        scanf("%d", &number);
        sum += number;
    } while (number != -9);
    printf("%d", sum+9);
}