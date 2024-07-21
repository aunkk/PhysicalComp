#include <stdio.h>

int main(){
    double location;
    // char output[20];
    scanf("%lf", &location);
    if (location >= 0 && location <= 5.032)
    {
        printf("Bangkok");
    }
    else if (location > 5.032 && location <= 35.477)
    {
        printf("Samut Prakarn");
    }
    else if (location > 35.477 && location <= 52.900)
    {
        printf("Chachoengsao");
    }
    else if (location > 52.900 && location <= 58.855)
    {
        printf("Chon Buri");
    }
    else
    {
        printf("InValid");
    }
    
}