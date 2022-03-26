#include <stdio.h>

int main (){
	int lebar, tc, a, b;
	int hasil = 0;
	scanf("%d", &lebar);
	scanf("%d", &tc);
	for(int i = 0; i < tc; i++){
		scanf("%d %d", &a, &b);
		hasil += a*b;
	}
	printf("%d", hasil/lebar);
	return 0;
}
