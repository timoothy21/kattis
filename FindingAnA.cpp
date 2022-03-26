#include <stdio.h>
#include <string.h>

int main() {
    char kata[1001];
    scanf("%s", kata);
    int length = strlen(kata);
    int n;
    for(int i = 0; i < length; i++) {
        if(kata[i] == 'a'){
            n = i;
            break;
        }
    }
    for(int i = n; i < length; i++) {
        printf("%c", kata[i]);
    }
    return 0;
}