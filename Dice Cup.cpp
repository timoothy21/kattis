#include <stdio.h>

int main (){
	int a, b;
	scanf("%d %d", &a, &b);
	if (b < a){
		int temp = b;
		b = a;
		a = temp;
	}
	for(int i = a+1; i <= b+1; i++){
		printf("%d\n", i);
	}
	return 0;
}
