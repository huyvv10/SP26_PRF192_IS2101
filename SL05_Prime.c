#include <stdio.h>
//Return 1 if n is a prime number. Return 0 otherwise
int isPrime(int n){
	int i;
	if (n<2) return 0;
	for (i=2; i*i<=n; i++)
		if (n%i==0) return 0;
	return 1;	
}
int main(){
	int n;
	scanf("%d", &n);
	printf("\nOUTPUT\n");
	if (isPrime(n)==1)
		printf("%d is a prime number.",n);
	else
		printf("%d is not a prime number.",n);
			
	return 0;
}
