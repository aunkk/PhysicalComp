#include <stdio.h>

int main(){
    char id[10], name[50];
    scanf("%s ", id);
    scanf("%[^\n]", name);
    printf("Hello! My name is %s, %s", name, id);
}