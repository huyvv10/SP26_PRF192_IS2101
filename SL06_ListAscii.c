#include <stdio.h>

int main(){
	char c, c1, c2;
	scanf("%c", &c1); getchar();
	scanf("%c", &c2);
	if (c1 > c2){char tg=c1; c1=c2; c2=tg;}
	c=c1;
	do{
		printf("%c \t %d \t %o \t %x\n", c, c, c, c);
		c++;
	}while (c<=c2);
	
	return 0;
}
