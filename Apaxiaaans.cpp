#include <stdio.h>
#include <string.h>

int main (){
    char name[255];
    scanf("%s", &name);
    int length = strlen(name);
    for(int i = 0; i < length; i++){
        if(i == 0){
            printf("%c", name[i]);
        }else if(name[i] != name[i-1] && name[i] == name[i+1]){
            printf("%c", name[i]);
        } else if((name[i] == name[i-1] && name[i] == name[i+1]) || (name[i] == name[i-1] && name[i] != name[i+1])){
            continue;
        } else{
            printf("%c", name[i]);
        }
    }

    return 0;
}