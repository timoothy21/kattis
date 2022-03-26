#include <stdio.h>

int main (){
    int tc, tc1;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d", &tc1);
        int angka;
        int min = 99, max = 0;
        for(int j = 0; j < tc1; j++){
            scanf("%d", &angka);
            if(angka > max){
                max = angka;
            }
            if(angka < min){
                min = angka;
            }
        }
        printf("%d\n", (max-min)*2);
    }
    return 0;
}