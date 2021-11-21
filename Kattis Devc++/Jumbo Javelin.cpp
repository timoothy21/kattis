#include <stdio.h>

int main (){
	int tc;
	scanf("%d", &tc);
	int angka, hasilAkhir;
	int hasilAwal = 0;
	for(int i = 0; i < tc; i++){
		scanf("%d", &angka);
		hasilAwal += angka;
	}
	hasilAkhir = hasilAwal - (tc-1);
	printf("%d", hasilAkhir);
	return 0;
}
