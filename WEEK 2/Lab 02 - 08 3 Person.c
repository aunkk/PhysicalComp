#include <stdio.h>

int main(){
    char p1n[100], p1sn[100], p2[100], p3[100];
    scanf("%s", p1n);
    scanf("%s", p1sn);
    getchar();
    scanf("%[^\n]s ", p2);
    getchar();
    scanf("%[^\n]s", p3);

    printf("Person 1: %s %s\n", p1n, p1sn);
    printf("Person 2: %s\n", p2);
    printf("Person 3: %s\n", p3);
}