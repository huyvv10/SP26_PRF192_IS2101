#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
	char s[12]="S2v3 3* F&pt";
	int i=0;
	printf("%s\n", s);
	while (s[i]!='\0') {
		if (isalnum(s[i]))
			printf("%c is a alpha number\n", s[i]);
		if (isalpha(s[i]))
			printf("%c is a character\n", s[i]);
		if (isdigit(s[i]))
			printf("%c is a number\n", s[i]);
		if (isblank(s[i]))
			printf("%c is a blank\n", s[i]);
		if (islower(s[i]))
			printf("%c is a lower character\n", s[i]);
		if (isupper(s[i]))
			printf("%c is a upper character\n", s[i]);
		if (isspace(s[i]))
			printf("%c is a space character\n", s[i]);
		printf("%c in upper case is %c\n", s[i], toupper(s[i]));
		printf("%c in lower case is %c\n", s[i], tolower(s[i]));
		i++;
		printf("\n-----------***----------\n");
	}
	return 0;
}
