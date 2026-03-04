#include <stdio.h>
#define MAX 10

void input2DArray(int a[][MAX], int r, int c){
	int i,j;
	for (i=0; i<r; i++)
		for (j=0; j<c; j++){
			printf("a[%d][%d] = ", i, j); scanf("%d", &a[i][j]);
		}
}

void display2DArray(int a[][MAX], int r, int c){
	int i,j;
	for (i=0; i<r; i++){
		for (j=0; j<c; j++)
			printf("%d ", a[i][j]);
		printf("\n");	
	}
}

void displayMainDiagonal(int a[][MAX], int r, int c){
	int i;
	for (i=0; i<r; i++)
		printf("%d ", a[i][i]);	
}

int sumMainDiagonal(int a[][MAX], int r, int c){
	int i,S=0;
	for (i=0; i<r; i++)
		S+=a[i][i];	
	return S;		
}
int getMaxMainDiagonal(int a[][MAX], int r, int c){
	int i, max=a[0][0];
	for (i=1; i<r; i++)
		if (a[i][i]>max) max=a[i][i];
	return max;			
}
void displayTotalByRow(int a[][MAX], int r, int c){
	int i, j, S;
	for (i=0; i<r; i++){
		S=0;
		for (j=0; j<c; j++)
			S += a[i][j]; 
		printf("%d ", S);
	}
}

void displayTotalByColumn(int a[][MAX], int r, int c){
	int i, j, S;
	for (j=0; j<c; j++){
		S=0;
		for (i=0; i<r; i++)
			S += a[i][j]; 
		printf("%d ", S);
	}	
}
int main(){
	int arr[MAX][MAX];	
	int r,c, d;
	
	printf("Input number of rows: "); scanf("%d", &r);
	printf("Input number of columns: "); scanf("%d", &c);
	input2DArray(arr, r, c);
	display2DArray(arr, r, c);
	printf("\nMain diagonal\n");
	d = r > c ? c : r;
	displayMainDiagonal(arr, d, d);
	printf("\nTotal value of main diagonal: %d", sumMainDiagonal(arr, d, d));
	printf("\nThe maximum value of main diagonal: %d", getMaxMainDiagonal(arr, d, d));
	printf("\nTotal by rows:\n");
	displayTotalByRow(arr, r, c);
	printf("\nTotal by columns:\n");
	displayTotalByColumn(arr,r,c);
	return 0;
}
