#include <stdio.h>
#include <string.h>

int main() {
    char kata[31];
    scanf("%s", kata);
    int flag = 0;
    for(int i = 0; i < strlen(kata); i++){
        if(kata[i] == 's' && kata[i+1] == 's'){
            printf("hiss");
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("no hiss");
    }
    return 0;
}