#include <stdio.h>

int main (){
    double a;
    double convr = 10000 * (double)5280/4854;
    scanf("%lf", &a);
    int hasil = a*convr;
    if(hasil % 10 >= 5){
        hasil -= hasil%10;
        printf("%d", (hasil/10)+1);
    } else{
        hasil -= hasil%10;
        printf("%d", hasil/10);
    }
    return 0;
}