#include <stdio.h>

int main (){
	int tc, angka;
	scanf("%d", &tc);
	int hasil = 0;
	for (int i = 0; i < tc; i++){
		scanf("%d", &angka);
		if (angka < 0){
			hasil++;
		}
	}
	printf("%d", hasil);
	return 0;
}
