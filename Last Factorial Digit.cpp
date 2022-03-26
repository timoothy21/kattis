#include <stdio.h>

int main (){
	int tc;
	scanf("%d", &tc);
	for (int i = 0; i < tc; i++){
		int faktorial;
		int hasil = 1;
		scanf("%d", &faktorial);
		for (int i = 1; i <= faktorial; i++){
			hasil *=i;
		}
		printf("%d\n", hasil%10);
	}
	return 0;
}
