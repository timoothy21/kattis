#include <stdio.h>

int main (){
	int tc;
	double harga, a, b;
	double hasil = 0;
	scanf("%lf", &harga);
	scanf("%d", &tc);
	for(int i = 0; i < tc; i++){
		scanf("%lf %lf", &a, &b);
		hasil += a*b;
	}
	printf("%.7lf", hasil*harga);
	return 0;
}
