#include <stdio.h>

int main(){
    int number;
    scanf("%d", &number);
    do
    {
        printf("%d ", number);
        number--;
    } while (number >= 1);
}