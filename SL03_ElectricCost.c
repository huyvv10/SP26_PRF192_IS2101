#include <stdio.h>

int main() {
	int n;
	float cost;
	printf("Input your electric consume: ");
	scanf("%d", &n);
	if (n<=50)
		cost = n * 1600;
	else if (n <= 100)
		cost = 50 * 1600 + (n - 50)*2400;
	else if (n <= 150)
		cost = 50 * 1600 + 50*2400+(n - 100)*2800;
	else if (n <= 200)
		cost = 50 * 1600 + 50*2400 + 50*2800 + (n - 150)*3200;
	else 
		cost = 50 * 1600 + 50*2400 + 50*2800 + 50*3200 + (n - 200)*3700;

	printf("Your electric consume is %d Kwh.\nYour total cost is %.2f vnd", n, cost*1.1);
		
	return 0;
}
