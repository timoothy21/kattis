#include <stdio.h>

int main (){
	int tc, socket, listrik;
	scanf("%d", &tc);
	for(int i = 0; i<tc; i++){
		int total = 0;
		scanf("%d", &socket);
		for(int j = 0; j<socket; j++){
			scanf("%d", &listrik);
			total += listrik;
		}
		printf("%d\n", total-(socket-1));
	}
	
	
	return 0;
}
