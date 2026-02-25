#include <stdio.h>
void inputArray(int a[], int n){
	int i;
	for (i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}
void display(int a[], int n){
	int i;
	for (i=0; i<n; i++)
		printf("%d ", a[i]);
}
void displayOdd(int a[], int n){
	int i;
	for (i=0; i<n; i++){
		if (a[i]%2==1)
			printf("%d ", a[i]);
	}
}
void displayEven(int a[], int n){
	int i;
	for (i=0; i<n; i++){
		if (a[i]%2==0)
			printf("%d ", a[i]);
	}
}
int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	inputArray(arr,n);
	displayOdd(arr,n);
	printf("\n");
	displayEven(arr,n);
//	display(arr,n);
	return 0;
}
