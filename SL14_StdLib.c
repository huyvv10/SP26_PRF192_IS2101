#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	printf("Do lech cua %d va %d la %d\n", a, b, abs(a-b));
	int i;
	srand(time(NULL));		//gen seed by soft random
	for (i=0; i<10; i++)
		printf("%d ", rand());
	
	printf("\n");
	double n = 8.5;
	scanf("%lf", &n);
	printf("Floor: %lf", floor(n));
	printf("\nCeil: %lf", ceil(n));
	printf("\nRound: %lf", round(n));
	printf("\nTrunc: %lf", trunc(n));
	printf("\nSQRT: %lf", sqrt(n));
	printf("\nPow: %lf^2 = %lf", n, pow(n,2));
	return 0;
}
