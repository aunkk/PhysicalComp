#include <stdio.h>

int main(){
    int a, b, c, result;
    scanf("%d %d %d", &a, &b, &c);

    if (a+b > c){
        result = 1;
    }
    else{
        result = 0;
        printf("Triangle is not valid.");
        return 0;
    }
    if (a+c > b){
        result = 1;
    }
    else
    {
        result = 0;
        printf("Triangle is not valid.");
        return 0;
    }
    if (b+c > a)
    {
        result = 1;
        printf("Triangle is valid.");
    }
    else
    {
        result = 0;
        printf("Triangle is not valid.");
        return 0;
    }
}