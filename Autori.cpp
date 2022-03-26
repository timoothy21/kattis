#include <stdio.h>
#include <string.h>

int main (){
    char kata[101];
    scanf("%s", &kata);
    int length = strlen(kata);
    for(int i = 0; i < length; i++){
        if(i == 0){
            printf("%c", kata[i]);
        }
        if(kata[i] == '-'){
            printf("%c", kata[i+1]);
        }
    }
    return 0;
}