#include <stdio.h>

int main (){
    int tc, a, b;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        int hasil = 0;
        int hitung;
        scanf("%d", &a);
        scanf("%d", &b);
        while(b > 0){
            hitung = b - 2*a;
            if( hitung > 0){
                hasil += hitung;
            }
            a = b;
            scanf("%d", &b);
        }
        printf("%d\n", hasil);
    }
    return 0;
}