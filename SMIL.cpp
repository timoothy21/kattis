#include <stdio.h>
#include <string.h>
int main (){
    char kata[255];
    scanf("%s", &kata);
    int length = strlen(kata);
    for(int i = 0; i < length; i++){
        if((kata[i] == ':' || kata[i] == ';') && kata[i+1] == ')'){
            printf("%d\n", i);
            i+=1;
        } else if ((kata[i] == ':' || kata[i] == ';') && kata[i+1] == '-' && kata[i+2] == ')'){
            printf("%d\n", i);
            i+=2;
        }
    }

    return 0;
}