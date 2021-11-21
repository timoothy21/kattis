#include <stdio.h>

int main (){
	int tc, angka;
	int hasil = 0;
	scanf("%d", &tc);
	for(int i = 0; i < tc; i++){
		scanf("%d", &angka);
		hasil += angka;
	}
	printf("%d", hasil);
	return 0;
}
