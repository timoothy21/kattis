#include <stdio.h>

int main (){
	char angka[7];
	scanf("%s", angka);
	if(angka[0] == '5' && angka[1] == '5' && angka[2] == '5'){
		printf("1");
	}else{
		printf("0");
	}
	
	return 0;
}
