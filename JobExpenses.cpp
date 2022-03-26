#include <stdio.h>

int main() {
    int data;
    int n;
    int total = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &data);
        if(data < 0) {
            total += data;
        }
    }
    printf("%d", total*-1);


    return 0;
}