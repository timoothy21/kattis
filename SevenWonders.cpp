#include <stdio.h>
#include <string.h>

int main (){
    char name[51];
    scanf("%s", &name);
    int length = strlen(name);
    int t = 0, c = 0, g = 0;
    for(int i = 0; i < length; i++){
        if(name[i] == 'T'){
            t++;
        } else if(name[i] == 'C'){
            c++;
        } else if(name[i] == 'G'){
            g++;
        }
    }

    int min = 50;
    if(t < min){
        min = t;
    }
    if(c < min){
        min = c;
    }
    if(g < min){
        min = g;
    }

    int sum = min*7;
    sum += (t*t)+(c*c)+(g*g);
    printf("%d", sum);
    return 0;
}