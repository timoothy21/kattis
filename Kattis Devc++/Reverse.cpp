#include <stdio.h>

int main (){
	int tc;
	scanf("%d", &tc);
	int angka[tc];
	for(int i = 0; i<tc; i++){
		scanf("%d", &angka[i]);
	}
	for(int j = tc-1; j >= 0; j--){
		printf("%d\n", angka[j]);
	}
	return 0;
}
