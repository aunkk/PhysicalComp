#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;
    scanf("%c", &ch);
    if (isalnum(ch))
    {
        if (isdigit(ch))
        {
            printf("number");
        }
        else if (islower(ch))
        {
            printf("lowercase");
        }
        else if (isupper(ch))
        {
            printf("uppercase");
        }
    }
    else
    {
        printf("error");
    }
}