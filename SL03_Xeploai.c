#include <stdio.h>

int main() {
	float math, eng, prf, gpa;
	printf("Input your math score: ");
	scanf("%f", &math);
	printf("Input your eng score: ");
	scanf("%f", &eng);
	printf("Input your PRF192 score: ");
	scanf("%f", &prf);
	gpa =  (math+eng+prf)/3;
	if (gpa >= 9)
		printf("Your gpa is %.2f then you are excellence.", gpa);
	else if (gpa >= 8)
		printf("Your gpa is %.2f then you are good.", gpa);
	else if (gpa >= 7)
		printf("Your gpa is %.2f then you are well.", gpa);
	else if (gpa >= 5)
		printf("Your gpa is %.2f then you are fair.", gpa);
	else 
		printf("Your gpa is %.2f then you are poor.", gpa);
	return 0;
}
