#include <stdio.h>
void inputArray(int a[], int n){
	int i;
	for (i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}
//Return the position first found x in the array
//Return -1 if find not found.
int findFirstPos(int a[], int n, int x){
	int i, pos=-1;
	for (i=0; i<n; i++)
		if (a[i]==x){
			pos=i; break;
		}
	return pos;	
}
//Return the maximum value in the array
int getMax(int a[], int n){
	int max = a[0];
	int i;
	for (i=1; i<n; i++){
		if (a[i]>max) 
			max = a[i];
	}
	return max;
}

//Return the minimum value in the array
int getMin(int a[], int n){
	int min = a[0];
	int i;
	for (i=1; i<n; i++){
		if (a[i]<min) 
			min = a[i];
	}
	return min;	
}
//Return number appearances of x in the array
//int countValue(int a[], int n, int x){
int countValue(int *a, int n, int x){
	int i, count=0;
	for (i=0; i<n; i++)
		if(a[i] == x)
			count++;
	return count;		
}
int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	inputArray(arr,n);
	int x,pos;
	scanf("%d", &x);
	pos=findFirstPos(arr,n,x);
	printf("\n---OUTPUT---\n");
	if (pos!=-1)
		printf("%d", pos);
	else
		printf("Find not found %d in the array.", x);
	printf("\nThe maximum value in the array is %d", getMax(arr,n));		
	printf("\nThe minimum value in the array is %d", getMin(arr,n));		
	printf("\nThe number appearance of %d is %d", x, countValue(arr,n,x));
	return 0;
}
