#include <stdio.h>

int main(){
	int i, n = 10;
	for (i=0; i<n; i++){
		if (i == n/2) break;
		printf("%d ", i);
	}
		

	return 0;
}
