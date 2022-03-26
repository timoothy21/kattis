#include <stdio.h>

int main() {
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int nilai;
    scanf("%d", &nilai);
    if(100 >= nilai && nilai >= a) printf("A");
    else if(a > nilai && nilai >= b) printf("B");
    else if(b > nilai && nilai >= c) printf("C");
    else if(c > nilai && nilai >= d) printf("D");
    else if(d > nilai && nilai >= e) printf("E");
    else if(nilai < e) printf("F");
    return 0;
}