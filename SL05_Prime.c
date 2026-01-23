#include <stdio.h>
//Return 1 if n is a prime number. Return 0 otherwise
int isPrime(int n){
	int i;
	if (n<2) return 0;
	for (i=2; i*i<=n; i++)
		if (n%i==0) return 0;
	return 1;	
}

//List prime numbers from 2 to n
void listPrimeToN(int n){
	int i=2;
	if (n<2) return;
	while (i<=n){
		if (isPrime(i)==1)
			printf("%d ", i);
		i++;	
	}
}

void menu(){
	printf("\n\n--------Hi-------\n");
	printf("1. Check prime number\n");
	printf("2. List prime to n\n");
	printf("3. List the first n prime numbers\n");
	printf("0. Quit\n");
	printf("Your selection: ");
}

int main(){
	int n, sel;
	do{
		menu();
		scanf("%d", &sel);
		switch (sel){
			case 1:
				printf("Input n = ");
				scanf("%d", &n);
				printf("\nOUTPUT\n");
				if (isPrime(n)==1)
					printf("%d is a prime number.",n);
				else
					printf("%d is not a prime number.",n);				
				break;
			case 2:
				printf("Input n = ");
				scanf("%d", &n);				
				listPrimeToN(n);
				break;
			case 0:
				printf("\nBye bye..!!!\n");
				break;			
			default:
				printf("\nInvalid selection. Please select again.\n");
		}
	} while (sel!=0); 
	return 0;
}
