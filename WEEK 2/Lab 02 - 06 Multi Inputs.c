#include <stdio.h>

int main(){
    char first[30], second[30], third[30], fourth[30];
    scanf("%s", &first);
    scanf("%s", &second);
    scanf("%s", &third);
    scanf("%s", &fourth);

    printf("String 1: %.3s\n", first);
    printf("String 2: %.4s\n", second);
    printf("String 3: %.5s\n", third);
    printf("String 4: %.6s\n", fourth);
}