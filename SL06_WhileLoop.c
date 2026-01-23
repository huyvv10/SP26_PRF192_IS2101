#include <stdio.h>
//S = 0 + 1 + 2 + 3 + 4 + ... n using while loop
int main(){
	int i=0, n, S=0;
	printf("Input n = "); scanf("%d", &n);
	
	while (i<=n){
		printf("%d ", i);
		S+=i;		//S = S+i;
		i++;		//i = i+1;
	}
	printf("\nTotal S = %d", S);
	
	return 0;
}
