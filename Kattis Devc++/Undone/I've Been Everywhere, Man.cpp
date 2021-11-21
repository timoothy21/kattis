#include <stdio.h>

int main (){
	int tc, tc1;
	char kota[100][20];
	scanf("%d", &tc);
	int totalKota = 0;
	for(int i = 0; i < tc; i++){
		scanf("%d", &tc1);
		for(int j = 1; j <= tc1; j++){
			scanf("%s", kota[j]);
			for(int k = 1; k < j-1;k ++){
				if(kota[j] == kota[k]){
					totalKota++;
				}
			}
		}
		printf("%d", totalKota);
	}
	return 0;
}
