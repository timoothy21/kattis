#include <stdio.h>
#include <math.h>
//undone

#define ll long long

int main (){
    ll int angka, temp;
    ll int binary = 0;
    ll int reverseBinary = 0;
    ll int hasilAngkaReverse = 0;
    scanf("%lld", &angka);
    for(int i = 0; angka > 0; i++){ // ubah angka ke binary
        temp = angka % 2;
        angka /= 2;
        binary += temp * pow(10, i);
    }
    printf("%d", binary);
    for(int i = 0; binary > 0; i++){ // reverse binary number
        temp = binary%10;
        reverseBinary = reverseBinary*10+temp;
        binary /= 10;
    }
    for(int i = 0; reverseBinary > 0; i++){ // ubah binary ke angka
        temp = reverseBinary % 10;
        reverseBinary /= 10;
        hasilAngkaReverse += temp*pow(2, i);
    }
    printf("%lld\n", hasilAngkaReverse);
    return 0;
}
