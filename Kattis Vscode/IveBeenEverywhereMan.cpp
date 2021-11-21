#include <stdio.h>
#include <string.h>
//undone

int main (){
    int tc, tc1;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d", &tc1);
        char city[21];
        char listOfCity[tc1][21];
        memset(listOfCity, 0, sizeof(listOfCity));
        int index = 0;
        int counterCity = 0;
        for(int j = 0; j < tc1; j++){
            scanf("%s", &city);
            for(int k = 0; k < j; k++){
                if(k != 0){
                    if(city != listOfCity[k]){
                        strcpy(listOfCity[index], city);
                        index++;
                        counterCity++;
                    }
                } else {
                    strcpy(listOfCity[index], city);
                    index++;
                    counterCity++;
                }
                
            }
            printf("%d\n", counterCity);
            printf("%d\n", index);
        }
        printf("%d", counterCity);
    }
    return 0;
}