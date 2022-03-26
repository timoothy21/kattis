#include <stdio.h>

int main (){
	int alas, tinggi, total;
	scanf("%d %d", &alas, &tinggi);
	total = alas*tinggi;
	if(total % 2 == 0){
		printf("%d", alas*tinggi/2);
	} else if (total % 2 == 1){
		printf("%.1lf", (double)alas*tinggi/2);
	}
	return 0;
}
