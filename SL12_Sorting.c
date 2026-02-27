#include <stdio.h>
//Sort the array in ascending order
void selectionSort(int *a, int n){
	int i,j,min_index;
	for (i=0; i<n-1; i++){
		min_index=i;
		for (j=i+1; j<n; j++)
			if (a[j]<a[min_index]) min_index = j;
		if (min_index!=i){
			int tmp = a[i]; a[i] = a[min_index]; 
			a[min_index]=tmp;
		}	
	}
}
//Sort the array in descending order
void selectionSortDesc(int *a, int n){
	int i,j,max_index;
	for (i=0; i<n-1; i++){
		max_index=i;
		for (j=i+1; j<n; j++)
			if (a[j]>a[max_index]) max_index = j;	//swap > to < to change
		if (max_index!=i){
			int tmp = a[i]; a[i] = a[max_index]; 
			a[max_index]=tmp;
		}	
	}
}
void display(int *a, int n){
	int i;
	for (i=0; i<n; i++)
		printf("%d ", a[i]);
	printf("\n");
}
int main(){
	int n = 10;
	int arr[]={2,9,8,5,4,3,5,7,6,1};
	display(arr,n);
	selectionSort(arr,n);
	display(arr, n);
	selectionSortDesc(arr,n);
	display(arr,n);
	return 0;
}
