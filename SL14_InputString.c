#include <stdio.h>

int main(){
	char S[10];
	printf("Input your name: ");
//	scanf("%s", &S);
	scanf("%[^\n]", &S);
//	scanf("%[abcd]", &S);
//	scanf("%[a-zA-Z ]", &S);
//	scanf("%[0-9]", &S);
	printf("Your name is %s", S);
	
	fflush(stdin);		//Clear buffer
	printf("\n");
	char S2[10]	;
	printf("Input a string: "); 
	gets(S2);
	printf("Inputed string: %s\n", S2);
	puts(S2);
	return 0;
}
