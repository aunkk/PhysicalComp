#include <stdio.h>

int main(){
    char input[6];
    scanf("%s", input);
    printf("%.1s", input);
    printf("%79s", "");
    printf("%3.2s", input);
    printf("%78s", "");
    printf("%4.3s", input);
    printf("%77s", "");
    printf("%5.4s", input);
    printf("%76s", "");
    printf("%6.5s", input);

    return 0;
}