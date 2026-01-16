#include <stdio.h>

//S = 1+2+3 +.. + n
int main(){
	int i, n, S=0;
	printf("Input n = "); scanf("%d", &n);
	for (i=1; i<=n; i++){
		printf("%d + ", i);
		S += i;				//S = S + i;
	}
	printf("\b\b\b = %d", S);
	printf("\n");		//Xuong dong
	S=0;
	for (i=0; i<=n; i+=2){
		printf("%d + ", i);
		S += i;				//S = S + i;
	}
	printf("\b\b\b = %d", S);		
	printf("\n");		//Xuong dong
	S=0;
	for (i=1; i<=n; i+=2){
		printf("%d + ", i);
		S += i;				//S = S + i;
	}
	printf("\b\b\b = %d", S);
	return 0;
}
