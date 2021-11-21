#include <stdio.h>
#include <string.h>

int main (){
	char tc[55];
	int cup1 = 1;
	int cup2 = 2;
	int cup3 = 3;
	scanf("%s", &tc);
	int panjang = strlen(tc);
	for(int i = 0; i < panjang; i++){
		if(tc[i] == 'A'){
			int temp = cup1;
			cup1 = cup2;
			cup2 = temp;
		} else if (tc[i] == 'B'){
			int temp = cup2;
			cup2 = cup3;
			cup3 = temp;
		} else if (tc[i] == 'C'){
			int temp = cup1;
			cup1 = cup3;
			cup3 = temp;
		}
	}
	if(cup1 == 1){
		printf("1");
	}else if ( cup2 == 1){
		printf("2");
	}else if ( cup3 == 1){
		printf("3");
	}
	return 0;
}
