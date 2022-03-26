#include <stdio.h>

int main (){
	int tc;
	scanf("%d", &tc);
	int angka;
	int hasil = 0;
	for(int i = 0; i < tc; i++){
		scanf("%d", &angka);
		int pangkat = angka % 10;
		int kali = angka/10;
		int hasilPangkat = 1;
		for (int j = 0; j < pangkat; j++){
			hasilPangkat *= kali;
		}
		hasil += hasilPangkat;
	}
	printf("%d\n", hasil);
	return 0;
}
