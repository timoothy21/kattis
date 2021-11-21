#include <stdio.h>

int main (){
	int a, titik;
	scanf("%d", &a);
	int hasilPangkat = 1;
	for(int i = 0; i < a; i++){
		hasilPangkat *= 2;
	}
	titik = hasilPangkat+1;
	printf("%d", titik*titik);
	return 0;
}
