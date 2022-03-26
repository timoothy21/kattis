#include <stdio.h>

int main (){
    int jam, menit;
    scanf("%d %d", &jam, &menit);
    if(menit < 45){
        jam -= 1;
        if(jam < 0){
            jam = 24+jam;
        }
        menit += 15;
    } else{
        menit -= 45;
    }
    printf("%d %d", jam, menit);

    return 0;
}