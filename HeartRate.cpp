#include <stdio.h>

int main (){
	int tc, b;
	scanf("%d", &tc);
	double p;
	for(int i = 0; i < tc; i ++){
		scanf("%d %lf", &b, &p);
		double min = 60*(b-1)/p;
		double normal = 60*b/p;
		double max = 60*(b+1)/p;
		printf("%.4lf %.4lf %.4lf\n", min, normal, max);
	}
	return 0;
}
