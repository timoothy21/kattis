#include <stdio.h>

int main (){
	int tc, angka;
	int hasil = 0;
	scanf("%d", &tc);
	int total = tc;
	for(int i = 0; i<tc; i++){
		scanf("%d", &angka);
		if(angka >= 0){
			hasil += angka;
		} else{
			hasil += 0;
			total--;
		}
	}
	printf("%lf",(double)hasil/total);
	
	return 0;
}
