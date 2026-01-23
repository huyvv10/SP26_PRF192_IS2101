#include <stdio.h>
//List from 0 to n using Do .. while
int main(){
	int i=0, n;
	printf("Input n = "); scanf("%d", &n);
	do {
		printf("%d ", i);
		i++;
	}while (i<=n);
	return 0;
}
