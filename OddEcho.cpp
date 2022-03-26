#include <stdio.h>

int main (){
	int tc;
	char kata[10][100];
	scanf("%d", &tc);
	for(int i = 0; i<tc; i++){
		scanf("%s", &kata[i]);
	}
	for(int j = 0; j<tc; j+=2){
		printf("%s\n", kata[j]);
	}
	return 0;
}
