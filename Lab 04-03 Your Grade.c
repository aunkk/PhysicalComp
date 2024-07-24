#include <stdio.h>

int main() {
    char grade;
    scanf(" %c", &grade);
    switch (grade) {
    case 'a':
    case 'A':
        printf("Genius\n");
        break;
    case 'b':
    case 'B':
        printf("Good\n");
        break;
    case 'c':
    case 'C':
        printf("Try Harder\n");
        break;
    case 'd':
    case 'D':
        printf("Very Bad\n");
        break;
    case 'f':
    case 'F':
        printf("Fail\n");
        break;
    default:
        printf("Invalid Input\n");
        break;
    }
    return 0;
}
