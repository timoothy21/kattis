#include <stdio.h>

int harshadNumber(int angka) {
    int sum = 0;
    int temp;
    int tempAngka = angka;

    while(angka > 0) {
        temp = angka % 10;
        sum += temp;
        angka = angka / 10;
    }
    
    if(tempAngka % sum == 0) {
        return tempAngka;
    } else {
        tempAngka += 1;
        return harshadNumber(tempAngka);
    }
}


int main() {
    int angka;
    
    scanf("%d", &angka);
    int hasil = harshadNumber(angka);
    printf("%d\n", hasil);
    return 0;
}