#include <stdio.h>

void display(int a[], int n){
	int i;
	for (i=0; i<n; i++)
		printf("%d ", a[i]);
}

void inputArray(int a[], int n){
	int i;
	for (i=0; i<n; i++){
		printf("a[%d] = ", i); scanf("%d", &a[i]);
	}
}
void displayReserve(int a[], int n){
	int i;
	for (i=n-1; i>=0; i--)
		printf("%d ", a[i]);
}
int main(){
	int a1[10];
	int a2[]={5,3,2,7,9,4,6};
	int n=7;
	display(a2, n);
	printf("\n---a1--\n");
	display(a1,10);
	printf("\n");
	inputArray(a1,10);
	display(a1,10);
	printf("\n");
	displayReserve(a1,10);
	return 0;
}
