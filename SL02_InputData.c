#include <stdio.h>

int main(){
	char c, c1, c2, c3;
	printf("Input a character: ");
	scanf("%c", &c);
	printf("Your inputed character: %c", c);
//	getchar();		//Clear buffer
	fflush(stdin);	//Clear buffer
	printf("\nInput 3 characters: ");
	scanf("%c%c%c", &c1, &c2, &c3);
	printf("Your inputed characters: %c%c%c", c1,c2,c3);
		
	return 0;
}
