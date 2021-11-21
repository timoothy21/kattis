#include <stdio.h>

int main (){
    int nilai[5] = {0};
    int tempAngka;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &tempAngka);
            nilai[i] += tempAngka;
        }
    }
    int max = 0;
    int baris = 0;
    for(int i = 0; i < 5; i++){
        if(nilai[i] > max){
            max = nilai[i];
            baris = i;
        }
    }

    printf("%d %d", baris+1, max);


    return 0;
}