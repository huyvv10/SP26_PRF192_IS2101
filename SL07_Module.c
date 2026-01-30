#include <stdio.h>
#include "PrimeLib.c"

int isPrime(int);
void listPrimeToN(int);
int totalPrimeToN(int n);
void listTheFirstNPrimes(int n);
void listTheFirstNPrimesDoWhile(int n);
void listTheFirstNPrimesFor(int n);

int main(){
	int n;
	printf("n = "); scanf("%d", &n);
	if (isPrime(n)==1)				//Call return module
		printf("%d is a prime number.", n);
	else
		printf("%d is not a prime number.", n);
	
	printf("\nList prime from 2 to %d\n",n);
	listPrimeToN(n);				//Call void module		
	int total = totalPrimeToN(n);
	printf("\nTotal prime number from 2 to %d: %d", n, total);
	printf("\nTotal prime number from 2 to %d: %d", n, totalPrimeToN(n));
	printf("\nList the first %d primes\n",n);
	listTheFirstNPrimes(n);			//Call void module
	printf("\nList the first %d primes\n",n);
	listTheFirstNPrimesFor(n);
	printf("\nList the first %d primes\n",n);
	listTheFirstNPrimesDoWhile(n);
	return 0;
}

