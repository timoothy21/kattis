#include <stdio.h>

int main (){
    int tc, angka, temp;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d", &angka);
        if(angka < 0){
            temp = angka*-1;
            if(temp % 2 == 0){
                printf("%d is even\n", angka);
            } else if (temp % 2 == 1){
                printf("%d is odd\n", angka);
            }
        }
        if(angka >= 0){
            if(angka % 2 == 0){
                printf("%d is even\n", angka);
            } else if (angka % 2 == 1){
                printf("%d is odd\n", angka);
            }
        }
    }
    return 0;
}