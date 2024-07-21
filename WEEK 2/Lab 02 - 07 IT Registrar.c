#include <stdio.h>

int main(){
    char name[30], surname[30], id[20], data[20];
    float grade;
    int day, month, year;
    scanf("%s %s %s %s %f", name, surname, id, data, &grade);
    sscanf(data, "%d/%d/%d", &day, &month, &year);
    printf("Fullname: %s %s\n", name, surname);
    printf("ID: %s\n", id);
    printf("DOB: %02d-%02d-%04d\n", day, month, year);
    printf("GPA: %.2f\n", grade);
    return 0;
}