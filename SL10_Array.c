#include <stdio.h>

void inputArr(int a[], int n){
	int i;
	for (i=0; i<n; i++){
		printf("a[%d] = ", i); scanf("%d", &a[i]);
	}
}

void displayArr(int a[], int n){
	int i;
	for (i=0; i<n; i++){
		printf("%d ", a[i]);
	}
}
void displayArrReverse(int a[], int n){
	int i;
	for (i=n-1; i>=0; i--){
		printf("%d ", a[i]);
	}
}
int main(){
	int i, n;
	printf("Input number of elements: n = "); scanf("%d", &n);	
	int arr[n];				//Khai bao 1 mang 1 chieu arr
	inputArr(arr, n);
	displayArr(arr,n);
	
	printf("\n");
	int arr2[] = {5,9,6,8,7,4,5,2};		//Khai bao va khoi tao 1 mang arr2
	displayArr(arr2, 8);
	printf("\n");
	displayArrReverse(arr2, 8);	
	return 0;
}
