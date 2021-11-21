#include <stdio.h>

int main (){
    int tc, waktu;
    scanf("%d", &tc);
    int hasil = 0;
    for(int i = 1; i <= tc; i++){
        scanf("%d", &waktu);
        if(i % 2 == 1){
            waktu *= -1;
        }
        hasil += waktu;
    }
    if(hasil <= 0){
        printf("still running\n");
    } else{
        printf("%d", hasil);
    }
    return 0;
}