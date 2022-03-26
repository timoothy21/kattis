#include <stdio.h>
#include <string.h>

int main (){
	char kata[50];
	scanf("%s", kata);
	int panjang = strlen(kata);
	int hasil = 0;
	for(int i = 0; i < panjang; i++){
		for(int j = i+1; j < panjang; j++){
//			printf("%c %c\n", kata[i], kata[j]);
			if (kata[i] == kata[j]){
				hasil++;	
			}
//			printf("%d\n", hasil);
		}
	}
	if(hasil >= 1){
		printf("0\n");
	}else if(hasil == 0){
		printf("1\n");
	}
	return 0;
}
