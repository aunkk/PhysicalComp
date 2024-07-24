#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("%c", ch + ('a' - 'A'));
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c", ch - ('a' - 'A'));
    } else {
        printf("error");
    }

    return 0;
}
