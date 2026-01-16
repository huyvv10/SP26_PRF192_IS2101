#include <stdio.h>

//Liet ke day so
int main(){
	int i, n;
	printf("Input n = "); scanf("%d", &n);
	for (i=0; i<=n; i++)
		printf("%d ", i);
	
	printf("\n");
	for (i=n; i>=0; i--)
		printf("%d ", i);
	
	printf("\n");
	for (i=0; i<=n; i+=2)
		printf("%d ", i);
			
	printf("\n");
	for (i=1; i<=n; i+=2)
		printf("%d ", i);

	return 0;
}
