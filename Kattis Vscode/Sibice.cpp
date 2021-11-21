#include <stdio.h>
#include <math.h>

int main (){
    int tc, panjang, lebar, diagonal, isi;
    scanf("%d %d %d", &tc, &panjang, &lebar);
    diagonal = sqrt(pow(panjang, 2) + pow(lebar, 2));
    for(int i = 0; i < tc; i++){
        scanf("%d", &isi);
        if(isi <= panjang || isi <= lebar || isi <= diagonal){
            printf("DA\n");
        } else{
            printf("NE\n");
        }
    }
    return 0;
}