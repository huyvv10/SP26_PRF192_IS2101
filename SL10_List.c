#include <stdio.h>

void swapPointer(int *a, int *b){
	int tmp = *a; *a = *b; *b = tmp;
}
int main(){
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	if (a<b)
		swapPointer(&a, &b);		//Verify a > b
	int i;
	for (i=a; i>=b; i--)
		printf("%d ", i);
		
	return 0;
}
