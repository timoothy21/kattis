#include <stdio.h>

int main (){
	int a;
	scanf("%d", &a);
	double angka1, angka2, temp;
	for(int i = 0; i < a; i++){
		scanf("%lf %lf", &angka1, &angka2);
		temp += (angka1*angka2);
	}
	printf("%.3lf", temp);
	return 0;
}
