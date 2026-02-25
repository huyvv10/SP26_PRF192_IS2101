#include <stdio.h>
void inputArray(int a[], int n){
	int i;
	for (i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}
//Return 1 if n is a prime number. Return 0 otherwise.
int isPrime(int n){
	int i, rs=1;
	if (n<2) return 0;
	for (i=2; i*i<=n; i++)
		if (n%i==0) { 
			rs=0; break;
		}
	return rs;	
}
void display(int a[], int n){
	int i, count=0;
	for (i=n-1; i>=0; i--)
		if (isPrime(a[i])==1){
			count++;
			printf("%d ", a[i]);
		}
	printf("\n%d", count);	
}
int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	inputArray(arr,n);
	display(arr,n);
	return 0;
}
