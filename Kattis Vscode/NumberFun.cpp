#include <stdio.h>

int main (){
    int tc; 
    double a, b, c;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%lf %lf %lf", &a, &b, &c);
        if( a*b == c || a/b == c || a+b == c || a-b == c || b*a == c || b/a == c || b+a == c || b-a == c){
            printf("Possible\n");
        } else {
            printf("Impossible\n");
        }
    }

    return 0;
}