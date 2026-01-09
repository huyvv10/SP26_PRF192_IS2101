#include <stdio.h>

int main(){
	int a,b;
	printf("Input a = "); 	scanf("%d", &a);
	printf("Input b = ");	scanf("%d", &b);	
	
	printf("Sum of %d + %d = %d\n", a, b, a+b);
	printf("Sum of %d - %d = %d\n", a, b, a-b);
	printf("Sum of %d * %d = %d\n", a, b, a*b);
	printf("Sum of %d / %d = %f\n", a, b, (float)a/b);
	printf("Sum of %d / %d = %.2f\n", a, b, (float)a/b);
	return 0;
}
