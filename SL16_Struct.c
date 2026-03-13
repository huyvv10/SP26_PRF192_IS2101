#include <stdio.h>
#include <string.h>

typedef struct{
	char id[9];
	char name[31];
	int age;
	float mark;	
}Student;

int main(){
	Student sv1;
	strcpy(sv1.id,"He210001");
	strcpy(sv1.name,"Vu Van Huy");	
	sv1.age = 18;
	sv1.mark= 8.5;
	
	printf("%-10s %-25s %-5s %5s\n", "ID", "Name", "Age", "Mark");
	printf("%-10s %-25s %-5s %5s\n", "-------", "----", "---", "----");
	printf("%-10s %-25s %-5d %5.2f\n", sv1.id, sv1.name, sv1.age, sv1.mark);
	
	Student sv2 = {"He210123", "Nguyen Binh Khiem", 21, 7.0};
	printf("%-10s %-25s %-5d %5.2f", sv2.id, sv2.name, sv2.age, sv2.mark);
	return 0;
}
