#include <stdio.h>
#include <string.h>

typedef struct{
	char id[9];
	char name[31];
	int age;
	float mark;	
}Student;

void inputStruct(Student std[], int n){
	int i;
	for (i=0; i<n; i++){
		fflush(stdin);
		printf("Input id %d: ", i+1); gets(std[i].id);fflush(stdin);
		printf("Input name %d: ", i+1); gets(std[i].name);fflush(stdin);
		printf("Input age %d: ", i+1); scanf("%d", &std[i].age);
		printf("Input mark %d: ", i+1); scanf("%f", &std[i].mark);
		printf("\n----------\n");
	}
}

void displayStruct(Student std[], int n){
	int i;
	printf("%-10s %-25s %-5s %5s\n", "ID", "Name", "Age", "Mark");
	printf("%-10s %-25s %-5s %5s\n", "-------", "----", "---", "----");
	for (i=0; i<n; i++){
		printf("%-10s %-25s %-5d %5.2f\n", std[i].id, std[i].name, std[i].age, std[i].mark);	
	}
}
int main(){
	int n;
	printf("Input number of students: "); scanf("%d", &n);
	Student sv[n];
	inputStruct(sv, n);
	displayStruct(sv, n);
	return 0;
}
