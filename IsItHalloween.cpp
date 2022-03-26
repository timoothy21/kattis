#include <stdio.h>
#include <string.h>

int main (){
    char month[4];
    int date;
    scanf("%s %d", &month, &date);
    if(strcmp(month, "OCT") == 0 && date == 31){
        printf("yup\n");
    } else if (strcmp(month, "DEC") == 0 && date == 25){
        printf("yup\n");
    } else {
        printf("nope\n");
    }
    return 0;
}