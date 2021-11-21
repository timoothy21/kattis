#include <stdio.h>

int main (){
	int tc;
	int angka[55];
	int cek[55];

	scanf("%d", &tc);
	
	for(int p = 0; p < tc; p++){
		scanf("%d", &angka[p]);
	}
	
	for(int o = 0; o < tc-1; o++){
		scanf("%d", &cek[o]);
	}
	
	for(int i = 0; i < tc; i++){
		int hasil = 0;
		for (int j = i+1; j < tc; j++){
			if(angka[i] != cek[j]){
				hasil++;
			}
		}
		if(hasil == (tc-1)){
			printf("%d", angka[i]);
		}
		
	}

	return 0;
}
