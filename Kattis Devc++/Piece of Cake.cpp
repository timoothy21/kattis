#include <stdio.h>

int max(int a, int b){
	return (a < b) ? b : a;
}


int main (){
	int persegi, panjang, lebar;
	int a, b, c, d;
	scanf("%d %d %d", &persegi, &panjang, &lebar);
	printf("%d\n", max(persegi-panjang, panjang) * max(persegi-lebar, lebar) * 4 );
	return 0;
}
