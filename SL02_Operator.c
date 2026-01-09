#include <stdio.h>

int main(){
	int n = 5, m = 8, x = 3, y=3;
	n++;
	m--;
	printf("m = %d\n", m);
	printf("n = %d\n", n);
	x += 2;	//x = x + 2
	y -=4;	//y = y - 4
	printf("x = %d \t y = %d", x, y);
	
	return 0;
}
