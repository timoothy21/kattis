#include <stdio.h>

int main() {
    int gold, silver, copper;
    scanf("%d %d %d", &gold, &silver, &copper);
    int buyingpower = gold*3 + silver*2 + copper*1;
    if(buyingpower >= 8) printf("Province or Gold");
    else if(buyingpower >= 6) printf("Duchy or Gold");
    else if(buyingpower >= 5) printf("Duchy or Silver");
    else if(buyingpower >= 3) printf("Estate or Silver");
    else if(buyingpower >= 2) printf("Estate or Copper");
    else printf("Copper");
    return 0;
}