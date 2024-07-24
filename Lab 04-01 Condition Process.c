#include <stdio.h>

int main(){
    int num1, num2, result;
    scanf("%d %d", &num1, &num2);
    if(num1 == num2){
        result = num1 + num2;
        printf("%d + %d = %d", num1, num2, result);
    }
    else{
        result = num1 - num2;
        printf("%d - %d = %d", num1, num2, result);
    }
}