#include <stdio.h>
#define PI 3.14159
#define MAX 30

int main(){
	const float pi = 3.14159;
	char varC = 'F';
	int varN = 5;
	float varF = 8.5F;
	double varD = 9.2;
	
	printf("pi = %f \t PI = %f \t MAX = %d", pi, PI, MAX);
	printf("\nKieu du lieu ky tu: %c", varC);
	printf("\nDia chi cua varc %x", &varC);
	printf("\nKieu du lieu so nguyen: %d", varN);
	printf("\nKieu du lieu so thuc float: %f", varF);
	printf("\nKieu du lieu so thuc float: %.2f", varF);
	printf("\nKieu du lieu so thuc double: %lf", varD);
	printf("\nKieu du lieu so thuc double: %.1lf", varD);
	
	return 0;
}
