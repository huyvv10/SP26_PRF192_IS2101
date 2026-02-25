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
	
	return 0;
}

//Return the minimum value in the array
int getMin(int a[], int n){
	
	return 0;
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
	return 0;
}
