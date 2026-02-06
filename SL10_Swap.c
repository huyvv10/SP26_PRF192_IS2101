#include <stdio.h>

void swap(int a, int b){
	printf("\nBen trong swap a = %d, b = %d", a, b);
	int tmp = a; a = b; b = tmp;
	printf("\nAfter swap a = %d, b = %d", a, b);
}

void swapPointer(int *a, int *b){
	printf("\nBen trong swap a = %d, b = %d", *a, *b);
	int tmp = *a; *a = *b; *b = tmp;
	printf("\nAfter swap a = %d, b = %d", *a, *b);
}
int main(){
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("Truoc khi swap: a = %d, b = %d", a, b);
	swap(a, b);
	printf("\nSau khi swap main: a = %d, b = %d", a, b);
	
	printf("\n\nTruoc khi swap Pointer: a = %d, b = %d", a, b);
	swapPointer(&a, &b);
	printf("\nSau khi swapPointer  main: a = %d, b = %d\n", a, b);
	printf("\n");
	int i;
	for (i=a; i>=b; i--)
		printf("%d ", i);
		
	return 0;
}
