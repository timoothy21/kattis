#include <stdio.h>

int main (){
	int tc;
	scanf("%d", &tc);
	int angka[tc];
	if(tc % 2 == 1){
		printf("still running");
	}else{
		for(int i = 0; i < tc; i+=2){
			scanf("%d\n%d", &angka[i], &angka[i+1]);
			printf("%d\n", angka[i]+angka[i+1]);
		}
	}
	return 0;
}
