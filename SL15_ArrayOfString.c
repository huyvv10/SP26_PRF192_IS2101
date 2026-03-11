#include <stdio.h>
#include <string.h>
#define MAX 31
void display(char s[][MAX], int n){
	int i;
	for (i=0; i<n; i++)
		printf("%s\n", s[i]);
}
void inputArray(char s[][MAX], int n){
	int i;
	for (i=0; i<n; i++){
		printf("Input string %d: ", i+1); 
		scanf("%[^\n]", &s[i]);
		fflush(stdin);
	}
}
//Sort the array of string in ascending order
void sortAsc(char s[][MAX], int n){
	int i,j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (strcmp(s[j], s[j-1])<0){
				char tmp[MAX];
				strcpy(tmp, s[j]); strcpy(s[j], s[j-1]); strcpy(s[j-1], tmp);
			}
}

//Sort the array of string in descending order
void sortDesc(char s[][MAX], int n){
	int i,j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (strcmp(s[j], s[j-1])>0){
				char tmp[MAX];
				strcpy(tmp, s[j]); strcpy(s[j], s[j-1]); strcpy(s[j-1], tmp);
			}
}

int search(char s[][MAX], int n, char *kw){
	int i, pos=-1;
	for (i=0; i<n; i++){
		char s1[MAX], s2[MAX];	
		strcpy(s1,s[i]); strcpy(s2, kw);
		if (strcmp(strupr(s1),strupr(s2))==0){
			pos=i; break;
		}
	}
	return pos;	
}
int main(){
	char S[3][MAX]={"ABC xyz", "Fpt University", "Vu Huy"};
	display(S,3);
	printf("\n");
	int n;
	scanf("%d", &n);
	fflush(stdin);
	char S1[n][MAX];
	inputArray(S1, n);
	display(S1, n);
	printf("\n");
	sortAsc(S1, n);
	display(S1, n);
	printf("Input search keyword: "); 
	char kw[MAX];
	gets(kw);
	int pos= search(S1, n, kw);
	if (pos!=-1)
		printf("%s is found at position %d\n", kw, pos);
	else
		printf("Find not found %s in the array\n", kw);
	display(S1, n);		
	return 0;
}
