#include <stdio.h>

int main(){
    int number;
    scanf("%d", &number);
    if (number > 0)
    {
        for (int i = number; i >= 0; i--)
        {
            printf("%d ", i);
        }
    }
    else{
        for (int i = number; i <= 0; i++)
        {
            printf("%d ", i);
        }
        
    }

}