#include <stdio.h>

int main (){
	int a, b;
	scanf("%d %d", &a, &b);
	char kata [a][1000];
	for(int i = 0; i < a; i++){
		scanf("%s", &kata[i]);
	}
	printf("%d", b);
	return 0;
}
