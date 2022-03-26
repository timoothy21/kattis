#include <stdio.h>

int main (){
    int tc;
    scanf("%d", &tc);
    int waktu[tc];
    int perpindahan[tc];
    int hasil;
    int max = 0;
    for(int i = 0; i < tc; i++){
        scanf("%d %d", &waktu[i], &perpindahan[i]);
    }
    for(int i = 0; i < tc-1; i++){
        hasil = (perpindahan[i+1]-perpindahan[i])/(waktu[i+1]-waktu[i]);
        if(hasil > max){
            max = hasil;
        }
    }
    printf("%d\n", max);

    return 0;
}