#include <stdio.h>

int main(){
    int time, left;
    int day, hour, min, sec;
    scanf("%d", &time);
    sec = time%60;
    left = (time - sec)/60;
    min = left%60;
    left = (left - min)/60;
    hour = left%24;
    left = (left - hour)/24;
    day = left;
    printf("%d s = %d d %d h %d m %d s", time, day, hour, min, sec);
}