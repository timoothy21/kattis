#include <stdio.h>

int main() {
    int g, truck, n, data;
    int sum = 0;
    scanf("%d %d %d", &g, &truck, &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &data);
        sum += data;
    }
    int hasilG = g*90/100;
    int hasilTruct = truck*90/100;
    printf("%d\n", hasilG - ( hasilTruct + sum));
    return 0;
}