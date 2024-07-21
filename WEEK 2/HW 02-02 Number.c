#include <stdio.h>

int main(){
    char input[6];
    scanf("%5s", input);
    printf("%c%c%c%c%c", input[2], input[3], input[4], input[0], input[1]);
    return 0;
}