#include <stdio.h>
#include <string.h>

int main (){
	char kata [1100];
	scanf("%s", &kata);
	int panjang = strlen(kata);
	printf("h");
	for(int i = 0; i < (panjang-2)*2 ; i++){
		printf("e");
	}
	printf("y");
	return 0;
}
