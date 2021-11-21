#include <stdio.h>

int main (){
	int tc, a, b;
	scanf("%d", &tc);
	for(int i = 1; i <= tc; i++){
		scanf("%d %d", &a, &b);
		int hasil = 0;
		for(int j = 1; j <= b; j++){
			hasil += j;
		}
		printf("%d %d\n", i, hasil+b);
	}
	
	return 0;
}
