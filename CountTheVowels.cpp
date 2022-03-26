#include <stdio.h>
#include <string.h>

int main() {
    char kata[100];
    scanf("%[^\n]", kata);
    int length = strlen(kata);
    int count = 0;
    for(int i = 0; i < length; i++) {
        if(kata[i] == 'a' || kata[i] == 'i' || kata[i] == 'u' || kata[i] == 'e' || kata[i] == 'o' || kata[i] == 'A' || kata[i] == 'I' || kata[i] == 'U' || kata[i] == 'E' || kata[i] == 'O') {
            count++;
        }
    }
    printf("%d", count);
}