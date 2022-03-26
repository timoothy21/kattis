#include <stdio.h>

int main (){
	int tc;
	scanf("%d", &tc);
	int angka[1100];
	int cek[1100];
	int hasil = 0;
	int result;
	for(int i = 0; i < tc; i++){
		scanf("%d", &angka[i]);
	}
	for(int j = 0; j < tc-1; j++){
		scanf("%d", &cek[j]);
	}
	for(int k = 0; k < tc; k++){
		for(int l = 0; l < tc-2; l++){
			if(angka[k] == cek[l]){
				hasil+=1;
			}
		}
		if (hasil == 0){
			printf("%d", angka[k]);
			break;
		}
	}
	return 0;
}
