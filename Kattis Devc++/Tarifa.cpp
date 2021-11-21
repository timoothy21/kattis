#include <stdio.h>

int main (){
	int a, bulan, kuota;
	scanf("%d", &a);
	scanf("%d", &bulan);
	int temp = 0;
	for (int i = 0; i < bulan; i++){
		scanf("%d", &kuota);
		temp += kuota;
	}
	printf("%d", a *(bulan+1) - temp);
	return 0;
}
