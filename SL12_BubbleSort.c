#include <stdio.h>
//Sort the array in ascending order
void bubbleSort(int *a, int n){
	int i,j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (a[j] < a[j-1]){
				int tmp = a[j]; a[j] = a[j-1]; a[j-1] = tmp;
			}
}
//Sort the array in descending order
void bubbleSortDesc(int *a, int n){
	int i,j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (a[j] > a[j-1]){
				int tmp = a[j]; a[j] = a[j-1]; a[j-1] = tmp;
			}
}
void display(int *a, int n){
	int i;
	for (i=0; i<n; i++)
		printf("%d ", a[i]);
	printf("\n");
}

void sortEvenOdd(int *a, int n){
	int i;
	bubbleSortDesc(a,n);	//Sort in descending order
	for (i=0; i<n; i++)
		if (a[i]%2==0)
			printf("%d ", a[i]);
			
	bubbleSort(a,n);		//Sort in ascending order
	for (i=0; i<n; i++)
		if (a[i]%2==1)
			printf("%d ",a[i]);			
}
int main(){
	int n = 10;
	int arr[]={2,9,8,5,4,3,5,7,6,1};
	display(arr,n);
	bubbleSort(arr,n);
	display(arr,n);
	sortEvenOdd(arr,n);
	return 0;
}
