#include <stdio.h>

//Return 1 if n is a prime number
//Return 0 otherwise.
int isPrime(int n){
	int i;
	if (n<2) return 0;
	for (i=2; i*i<=n; i++)
		if (n%i==0) return 0;
	return 1;	
}

//Display the list of primes from 2 to x
void listPrimeToN(int x){
	int i;
	if (x<2) return;
	for (i=2; i<=x; i++)
		if (isPrime(i)==1)
			printf("%d ", i);
}

//Return the total prime numbers from 2 to n.
int totalPrimeToN(int n){
	int i,S=0;
	if (n<2) return 0;
	for (i=2; i<=n; i++)
		if (isPrime(i)==1){
			S+=i;			
		}
	return S;	
}

//Display the first n prime numbers
void listTheFirstNPrimes(int n){
	int i=2, count=0;
	while (count<n){
		if (isPrime(i)==1){
			printf("%d ", i);
			count++;
		}
		i++;
	}
}

void listTheFirstNPrimesDoWhile(int n){
	int i=2, count=0;
	
}
//Display the first n prime numbers using for loop
void listTheFirstNPrimesFor(int n){
	
}

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
