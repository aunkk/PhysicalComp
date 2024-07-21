#include <stdio.h>

int main(){
    char c1, c2, c3, c4, c5;
    scanf("%c %c %c %c %c", &c1, &c2, &c3, &c4, &c5);
    c1 += 1; c3 += 1; c5 += 1;
    printf("%c\n%c\n%c\n%c\n%c\n", c1, c2, c3, c4, c5);
}