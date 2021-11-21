#include <stdio.h>

int main (){
    int juri, udhNilai, temp;
    double min, max;
    int sum = 0;
    scanf("%d %d", &juri, &udhNilai);
    for (int i = 0; i < udhNilai; i++) {
        scanf("%d", &temp);
        sum += temp;
    }
    min = (sum - 3*(juri-udhNilai));
    max = (sum + 3*(juri-udhNilai));
    printf("%.4lf %.4lf", min/juri, max/juri);
    return 0;
}