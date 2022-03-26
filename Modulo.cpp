#include <stdio.h>

int main() {
    int hasil[42] = {0};
    int angka;
    for(int i = 0; i < 10; i++){
        scanf("%d", &angka);
        hasil[angka%42]++;
    }
    int count = 0;
    for(int i = 0; i < 42; i++){
        if(hasil[i] > 0){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}