#include <stdio.h>
#include <string.h>

int main(){
	char S[30], S2[50];
	scanf("%[^\n]", &S);
	
	printf("The length of %s is %d", S, strlen(S));
	strcpy(S2, S);
	printf("\nThe length of %s is %d", S2, strlen(S2));
	strcpy(S2, "Toi day");
	printf("\nThe length of %s is %d", S2, strlen(S2));
	printf("\nString cat 2 strings %s and %s => %s", S, S2, strcat(S, S2));
	if (strcmp(S, S2)==1)
		printf("\nXau 1 > Xau 2");
	else if (strcmp(S, S2)==0)	
		printf("\nXau 1 = Xau 2");
	else
		printf("\nXau 1 < Xau 2");
	
	printf("\nThe upper case of %s is %s", S, strupr(S));	
	printf("\nThe lower case of %s is %s", S, strlwr(S));	
	return 0;
}
