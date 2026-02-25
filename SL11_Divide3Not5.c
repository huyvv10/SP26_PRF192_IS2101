#include <stdio.h>
void inputArray(int a[], int n){
	int i;
	for (i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}
void display(int a[], int n){
	int i, count=0;
	for (i=0; i<n; i++)
		if (a[i]%3==0 && a[i]%5 != 0){
			printf("%d ", a[i]);
			count++;
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
