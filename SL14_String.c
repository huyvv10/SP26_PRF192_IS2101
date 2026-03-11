#include <stdio.h>

int main(){
	char s1[30] = "I am an FPT student!";
	
	printf("%s\n", s1);
	//Cach in xau thu 2
	puts(s1);
	
	printf("\nCach in 3\n");
	//Cach in xau thu 3
	int i=0;
	while (s1[i]!='\0'){
		printf("%c", s1[i]);
		i++;
	}
	return 0;
}
