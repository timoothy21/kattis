#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    double h;
    int v;
    scanf("%lf %d", &h, &v);
    // double result = ;
    double hasil = h/sin(v*PI/180);
    int round = hasil+1;
    printf("%d\n", round);
    return 0;
}