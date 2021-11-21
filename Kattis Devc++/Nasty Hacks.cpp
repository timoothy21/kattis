#include <stdio.h>

int main (){
	int tc;
	scanf("%d", &tc);
	for (int i = 0; i < tc; i++){
		int giklan, iklan, biaya;
		scanf("%d %d %d", &giklan, &iklan, &biaya);
		int total = giklan + biaya;
		if(iklan > total){
			printf("advertise\n");
		} else if (iklan < total){
			printf("do not advertise\n");
		} else if (iklan == total){
			printf("does not matter\n");
		}
	}
	return 0;
}
