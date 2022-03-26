#include <stdio.h>
#include <string.h>

int main (){
    int tc, tc1;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d", &tc1);
        char city[21];
        char listOfCity[tc1][21];
        int index = 0;
        int counterCity = 0;
        for(int j = 0; j < tc1; j++){
            int flag = 0;
            scanf("%s", &city);
            for(int k = 0; k < counterCity; k++){
                if(strcmp(city, listOfCity[k]) != 0){
                    flag++;
                }
            }
            if(flag == counterCity){
                strcpy(listOfCity[counterCity], city);
                counterCity++;
            }
        }
        printf("%d\n", counterCity);
    }
    return 0;
}