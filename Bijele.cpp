#include <stdio.h>

int main (){
	int arr[] = {1, 1, 2, 2, 2, 8};
	for(int i = 0; i < 6; i++){
		int catur;
		scanf("%d", &catur);
		printf("%d", arr[i] - catur);
		if(i != 6){
			printf(" ");
		}
	}
	return 0;
}
