#include <stdio.h>
//Chia het cho 3
int main(){
	int i, n, S=0;
	printf("Input n = "); scanf("%d", &n);
	for (i=3; i<=n; i++){
		if (i%3==0){
			printf("%d + ", i);
			S+=i;
		}
	}
	printf("\b\b\b = %d", S);
	printf("\n");
	S=0;
	for (i=3; i<=n; i++){
		if (i%3==0 && i%5!=0){
			printf("%d + ", i);
			S+=i;
		}
	}
	printf("\b\b\b = %d", S);
	
	return 0;
}
